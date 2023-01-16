/*---------------- TASK1--------------*/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {

    int BinarySearch(int low, int high){
        if( low <= high ){
         
            int mid = low + ( high - low )/2;
            if( guess(mid) == 0 ) return mid;

            if( guess(mid) == -1 ) return BinarySearch( low, mid -1);
            else if( guess(mid) == 1 ) return BinarySearch( mid+1, high);     
        }
        return -1;
    }
public:
    int guessNumber(int n) {
        return BinarySearch(1,n);
    }
};
/*---------------- TASK2--------------*/
class Solution {
public:
    char BinarySearch( vector <char>&letters, int low, int high, int target){
        
        if( low <= high ){
             
            // edge conditions 
            if( letters[low] > target) return letters[low];
            if( letters[high] == target) return letters[0];
            if( letters[low] == target && letters[low+1] > target) return letters[low+1];          
            
            int mid = low + (high - low)/2;

            //base condition  
            if(letters[mid -1] <= target && letters[mid] > target ){
                return letters[mid];
            }

            if( letters[mid] > target ) return BinarySearch(letters,low,mid-1,target);
            if( letters[mid] <= target ) return BinarySearch(letters,mid+1,high,target);
        
        }
        return letters[0];
    }  


    char nextGreatestLetter(vector<char>& letters, char target) {
  
    if( target == 'z' ) return letters[0];
  
    return BinarySearch(letters,0,letters.size()-1,target);
    }
};