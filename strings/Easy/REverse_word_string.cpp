//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string temp="";
        for(int i=0; i<S.length(); i++){
            
            if(S[i]!='.'){
                temp=temp+S[i];
            }
            else{
                temp=S[i]+temp;
                ans=temp+ans;
                temp="";
            }
        }
        ans=temp+ans;

        return ans;
        
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