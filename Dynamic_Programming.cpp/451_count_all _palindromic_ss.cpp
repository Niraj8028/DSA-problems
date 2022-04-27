// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    int dp[1001][1001];
    long long m = 1e9 + 7;
    int solve(int i,int j,string s){
        if(i>j){
            return 0;
        }
        if(i==j){
            dp[i][j]=1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j]%m;
        }
        dp[i+1][j]=solve(i+1,j,s);
        dp[i][j-1]=solve(i,j-1,s);
        dp[i+1][j-1]=solve(i+1,j-1,s);
        if(s[i]==s[j]){
           return dp[i][j]=(1+dp[i+1][j]+dp[i][j-1])%m;
        }
        else{
            return dp[i][j]=(m+dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%m;
        }
        return dp[i][j]%m;
    }
    
    long long int  countPS(string str)
    {
       //Your code here
       int i=0;
       int j=str.length()-1;
       memset(dp,-1,sizeof(dp));
       int ans=solve(i,j,str);
       return ans;
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends