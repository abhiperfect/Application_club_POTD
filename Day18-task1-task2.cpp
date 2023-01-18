/*--------------------Task1--------------*/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

    vector<int> target;

   for(int i=0;i<nums.size();i++)
   {
   target.insert(target.begin() + index[i], nums[i]);      
   }
  
 return target;

    }
};
/*--------------------Task2--------------*/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

     int hsh[21] = {0};
     for( int i = 0; i < bills.size(); ++i){
            hsh[bills[i]]++;

            if( bills[i] == 10 ){
                
                if( hsh[5] > 0 )
                    hsh[5]--;
                else 
                    return false;

            }else if( bills[i] == 20){
                
                if( hsh[10] >= 1 && hsh[5] >= 1){
                    hsh[10]--;
                    hsh[5]--;
                    }
                else if( hsh[5] >= 3){
                    hsh[5] = hsh[5] - 3;
                }else return false;      
            }   

     }
     return true;
    }
};