//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int len=0;
    int l=0;
    int r=0;
   
    vector<int>mp(256,-1);
    while(r<S.length()){
        
        if(mp[S[r]]!=-1){
            l=max(l,mp[S[r]]+1);
        }
        mp[S[r]]=r;
        len=max(len,r-l+1);
        r++;
    }
    return len;
}