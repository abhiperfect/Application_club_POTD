/*---------------- TASK1--------------*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    
   int BinarySearch(int low, int high){
      
      if( low <= high ){
      int mid = low + (high - low )/2;
      if( (isBadVersion(low) )) return low;
      

      if( (isBadVersion(mid - 1) == false) && 
        (isBadVersion(mid) == true) &&
        (isBadVersion(mid + 1) == true) ) return mid;
      
      if( isBadVersion( mid ) == false ) return BinarySearch(mid+1,high);
      else if( isBadVersion( mid ) == true) return BinarySearch(low,mid -1); 
      
      }
      return -1;
     }

public:
    long long firstBadVersion(int n) {
      int i = 1;
      int index = BinarySearch(1,n);

    return index;
    }
};
/*---------------- TASK2--------------*/
class Solution {
public:
    int Binarysearch( int low, int high,int target){
    
    if( low <= high ){
       int mid = low + (high - low)/2;

       if( low <= target/low && (low+1) > target/(low+1) ) return low;

       if(mid != 1){
       if( ((mid-1) < (target/(mid-1))) &&
           ((mid) <= (target/mid)) &&
           ((mid+1) > (target/(mid+1))) ) return mid;
           }else {
               if(((mid) <= (target/mid)) &&
           ((mid+1) > (target/(mid+1))) ) return mid;

           }

        if( mid != 0){ 
        if(mid < target/mid) return Binarysearch(mid+1,high,target);
        else if( mid > target/mid) return Binarysearch(low,mid-1,target);  
       }else{
        if(mid < target/mid) return Binarysearch(mid+1,high,target);
        else if( mid > target/mid) return Binarysearch(low,mid-1,target);   
       }
    }
    return -1;
    }
    int mySqrt(int x) {

    if(x==0) return 0;     
    int index = Binarysearch(1,x,x);
    return index;
    }
};