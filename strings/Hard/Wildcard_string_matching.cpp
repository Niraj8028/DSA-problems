//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool dp[1001][1001];
    bool match(string wild, string pattern)
    {
        // code hereint
        int m=wild.length();
        int n=pattern.length();
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++){
                if(i==0 && j==0){
                dp[i][j]=true;
                }
                else if(i==0 && j>0){
                    dp[i][j]=false;
                }
                else if(j==0 && i>0){
                    bool flag=true;
                    for(int k=1; k<=i; k++){
                        dp[k][0]=(dp[k-1][0] && wild[k-1]=='*');
                    }
                }
            }
        }
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(wild[i-1]==pattern[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(wild[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(wild[i-1]=='*'){
                    dp[i][j]=(dp[i-1][j] || dp[i][j-1]);
                }
                else{
                    dp[i][j]=false;
                }
            }
        }
        return dp[m][n];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends