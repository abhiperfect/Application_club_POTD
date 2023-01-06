class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        
        for( int i = 1; i < n; ++i){
         if( arr[i] - arr[i-1] < 0 ) return false;   
        }
    
        return true;
    }
};