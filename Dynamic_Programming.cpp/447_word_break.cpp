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
        int n=s.size();
        bool dp[n+1][n+1];
        unordered_set<string>set;
        for(auto it:B){
            set.insert(it);
        }
        
        
        for(int i=1; i<=n; i++){
            int start=1;
            int end=start+i-1;
            while(end<=n){
                string temp=s.substr(start,i);
                if(set.find(temp)!=set.end()){
                    dp[start][end]=1;
                }
                else{
                    bool flag=false;
                    for(int i=start; i<end; i++){
                        if(dp[start][i] && dp[i+1][end]){
                            flag=true;
                            break;
                        }
                        
                    }
                    dp[start][end]=flag;
                }
                start++;
            }
            
        }
        return dp[1][n];
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