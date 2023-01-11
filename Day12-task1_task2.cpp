/*---------------- TASK1--------------*/
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {

    int prefix_count = 0;
    int flag = 0;
    for( int i = 0; i < words.size(); ++i){
       string string_of_words = words[i];
       flag = 0;
       for( int j = 0; j < words[i].size(); ++j){
           if( string_of_words[j] != s[j] ) flag = -1; 
       } 
       if( flag != -1 ) ++prefix_count;
    }

    return prefix_count;
    }
};
/*---------------- TASK2--------------*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map <int,int> map_of_a;
        for( int i = 0; i < n; ++i){
            map_of_a[a[i]]++;
            if( map_of_a[a[i]] >= k) return a[i];    
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        cout<<ob.firstElementKTime(a, n, k)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends