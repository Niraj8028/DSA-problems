//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findTime(string s1, string s2) {
        // code here
        unordered_map<char,int>mp;
        for(int i=0; i<s1.length(); i++){
            mp[s1[i]]=i;
        }
        int ans=mp[s2[0]];
        int temp=ans;
        for(int i=1; i<s2.length(); i++){
            ans+=abs(temp-mp[s2[i]]);
            temp=mp[s2[i]];
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}
// } Driver Code Ends