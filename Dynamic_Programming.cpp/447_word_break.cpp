// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string s, vector<string> &B) {
        int wordBreak(string a, vector<string> &b) {
        int n=a.size();
       unordered_set<string> s;
       vector<bool> dp(n+1,false);
       for(int i=0;i<b.size();i++){
           s.insert(b[i]);
       }
       dp[0]=true;
       for(int i=1;i<=n;i++){
           for(int j=i-1;j>=0;j--){
              if(dp[j]==true &&
              s.find(a.substr(j,i-j))!=s.end()){
                dp[i]=true;
                break;
              }
           }
       }
       return dp[n];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends