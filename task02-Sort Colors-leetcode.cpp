class Solution {
public:
    void sortColors(vector<int>& nums) {
        int hsh[3]={0};


        for(int i=0;i<nums.size();i++)
        {

            hsh[nums[i]]++;
        }
        nums.clear();
        for(int i=0;i<3;i++)
        {
            cout<<hsh[i]<<" ";
            
            while(hsh[i]!=0)
            {
               nums.push_back(i);               
               hsh[i]--;
            }
        
        }
    }
};