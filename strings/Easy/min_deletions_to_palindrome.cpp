//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  int dp[1001][1001];
    int minimumNumberOfDeletions(string S) { 
        // code here
        string r=S;
        reverse(r.begin(),r.end());
        int n=S.size();
        
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int  i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(S[i-1]==r[j-1]){
                    dp[i][j]=(1+dp[i-1][j-1]);
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcs=dp[n][n];
        int ans=n-lcs;
        return ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends