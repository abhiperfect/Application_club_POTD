//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {   string SS;
        string temp;
        for( int i = S.size()-1; i >= 0; --i){
            if( S[i] == '.' ){
                reverse(temp.begin(),temp.end());
                SS+=temp+'.';
                temp.clear();
            }else if( i == 0){
                temp+=S[0];
                reverse(temp.begin(),temp.end());
                SS+=temp;
            }
            else{
                temp+=S[i];
            }
            
        }
        
    return SS;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends