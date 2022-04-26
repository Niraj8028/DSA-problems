// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int dp[1001][1001];
    int solve(vector<int>&a,int k,int n,int start,int end,int ans){
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        if(abs(a[start]-a[end])<=k){
            return dp[start][end]=ans;
        }
        int x,b;
        if(dp[start+1][end]!=-1){
            x=dp[start+1][end];
        }
        else{
            x=solve(a,k,n-1,start+1,end,ans+1);
        }
        if(dp[start][end+1]!=-1){
            b=dp[start][end+1];
        }
        else{
            b=solve(a,k,n-1,start,end-1,ans+1);
        }
        return dp[start][end]= min(x,b);
        
    }
    int removals(vector<int>& a, int k){
        //Code here
        sort(a.begin(),a.end());
        
        int n=a.size();
        int start=0;
        int end=n-1;
        if(abs(a[start]-a[end])<=k){
            return 0;
        }
        memset(dp,-1,sizeof(dp));
        int x=solve(a,k,n,start,end,0);
        return x;
        
    }
};


// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.removals(a,k);
        
        cout<<ans<<endl;
    }
}


  // } Driver Code Ends