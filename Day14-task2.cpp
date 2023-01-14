class Solution {
public:
    int update = 0;
     
    int BinarySearch(vector<int>& nums,int low, int high, int find){
        if( low <= high ){

            int mid = (low + high)/2;
            if( nums[mid] == find ) return mid;
            update = mid;
            if( nums[mid] < find) return BinarySearch(nums,mid + 1,high,find);
            else return BinarySearch(nums,low,mid-1,find);
        }
        return -1;
    }



    int searchInsert(vector<int>& nums, int target) {
    
    int index = BinarySearch(nums,0,nums.size()-1,target);
    if( index == -1){
        if( nums[update] < target ) return update + 1;
        else return update; 
    }
    
    return index;
    }
};