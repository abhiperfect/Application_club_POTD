//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    vector <int> v;
	    int cnt = 0;
	    for( int i = 0; i < n; ++i){
	        if( arr[i] != 0 ) v.push_back(arr[i] );
	        if( arr[i] == 0 ) cnt++; 
	        
	    }
	    for( int i = 1; i <= cnt ; ++i){
	        v.push_back(0);
	    }
	    for( int i = 0; i < v.size(); ++i) arr[i] = v[i];
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends