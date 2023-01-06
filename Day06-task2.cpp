class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set < int > Union;
        vector < int > UnionVec;
        
        for( int i = 0; i < n; ++i){
            Union.insert(arr1[i]);
        }
        for( int i = 0; i < m; ++i){
            Union.insert(arr2[i]);
        }        
        for(auto &it : Union) UnionVec.push_back(it);
        return UnionVec;
    }
};