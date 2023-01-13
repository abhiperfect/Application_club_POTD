/*---------------- TASK1--------------*/
// A document
/*---------------- TASK2--------------*/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

    int ice_count = 0;
    long long SumCos[100010]={0};   
    
    sort(costs.begin(),costs.end());
    SumCos[0] = costs[0];

    if( SumCos[0] <= coins ) ice_count = 1;
    for( int i = 1; i < costs.size(); ++i){
        SumCos[ i ] = SumCos[ i - 1 ] + costs[ i ]; 
     
        if( SumCos[i] <= coins ) ice_count = i + 1 ;
        if( SumCos[i] > coins ) break;
    }
    
    return ice_count;
    }
};