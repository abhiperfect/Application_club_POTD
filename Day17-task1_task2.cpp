/*---------------- TASK1--------------*/
class Solution {
public:
    int mostWordsFound(vector<string>& v) {
   
    int pre_max=0,max=0;
       
    for(int i=0;i<v.size();i++)
        {
            pre_max=0;
            string pre=v[i];
             for(int j=0;j<pre.size();j++)
             {
               if(pre[j]==' ')
                   pre_max++;

                   if(pre_max>max)
                    max=pre_max;             

             }     
        }

        return max+1;          
    }
};
/*---------------- TASK2--------------*/
class Solution {
public:

    int BinarySearch(int low,int high,vector<int>&a){
        if(low <= high ){
            
            int mid = low + (high - low)/2;
            // cout << low << " " << mid << " " <<high << endl;
            // cout << a[low] << " " << a[mid] << " " <<a[high] << endl;
            if( mid == a.size()-1 && a[mid-1] < a[mid] ) return mid;
            if( mid == 0 && a[mid] > a[mid+1] ) return mid;
            
            if( mid !=0 && mid != a.size()-1 ){
                if( a[mid-1] < a[mid] && a[mid] > a[mid+1]) return mid;
            }
            
            
            if( mid != 0){
                if(a[mid-1] < a[mid]) return BinarySearch(mid+1,high,a);
            }
            if( mid != a.size() -1){
                if(a[mid] > a[mid+1]) return BinarySearch(low,mid-1,a);
            }
            
        }
        return -1;
    } 

   
    int findPeakElement(vector<int>& a) 
    {
        int index = BinarySearch(0,a.size()-1,a);
        
        // cout<< index << endl;
        return a[index];
        // Code here.
    }
};
