//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    // vector <int> v = {2,3,5,7};
public:
    int primeSum(int N){
        string NN = to_string(N);
        int sum = 0;
        for( int i = 0; i < NN.size(); ++i){
            if( NN[i] == '2' || NN[i] == '3' || NN[i] == '5' || NN[i] == '7')
              sum += NN[i] - '0';
            
        }
        return sum;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends