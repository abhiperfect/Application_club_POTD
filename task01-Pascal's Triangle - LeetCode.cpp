class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pasco;
        int pascal[40][40] = {0};
        pascal[1][1] = 1;
        
        for( int i = 1; i < 40; ++i){
           pascal[i][1] = 1;
           pascal[i][i] = 1;   
        }
        for( int i = 3; i < 35; ++i){
           for( int j = 2; j < i; ++j){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];   
           }
        }
        for( int i = 1; i <= numRows; ++i){
            vector <int> temp;
           for( int j = 1; j <= i; ++j){
            temp.push_back(pascal[i][j]);   
           }
            pasco.push_back(temp);
        }        
return pasco;
    }
};