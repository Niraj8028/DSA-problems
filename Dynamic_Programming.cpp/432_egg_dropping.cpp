// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[301][301];
    int solve(int e, int f) 
    {   
        if(e==1){
            return f;
        }
        if(f==0 || f==1){
            return f;
        }
        if(dp[e][f]!=-1){
            return dp[e][f];
        }
        int ans=INT_MAX;
        for(int i=1; i<=f; i++){
            int a,b;
            if(dp[e-1][i-1]!=-1){
                a=dp[e-1][i-1];
            }
            else{
                a=solve(e-1,i-1);
            }
            if(dp[e][f-i]!=-1){
                b=dp[e][f-i];
            }
            else{
                b=solve(e,f-i);
            }
            int temp=1+max(a,b);
            ans=min(ans,temp);
        }
        return dp[e][f]=ans;
    }
    int eggDrop(int e, int f){
        memset(dp,-1,sizeof(dp));
        return solve(e,f);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends