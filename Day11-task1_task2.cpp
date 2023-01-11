/*---------------- TASK1--------------*/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     
      for( int i = 0; i < arr.size(); ++i){     
        if(arr[i] == 0){
        arr.pop_back();
        arr.insert( arr.begin()+i++,0);
        }
      }
    }
};
/*---------------- TASK2--------------*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    vector<int> intersection;
    set<int> nums1_set;
    set<int> nums2_set;
    for( int i = 0; i < nums1.size(); ++i){
       nums1_set.insert( nums1[i] );        
    }
    for( int i = 0; i < nums2.size(); ++i){
       nums2_set.insert( nums2[i] );        
    }
    for( auto it = nums2_set.begin(); it != nums2_set.end(); ++it){
        auto itt = nums1_set.find(*it);
        if( itt !=  nums1_set.end() )
          intersection.push_back(*it);
    } 
    return intersection; 
    }
};