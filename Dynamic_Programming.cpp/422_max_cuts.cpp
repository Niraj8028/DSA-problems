// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

    int fun(int n,int &x,int &y,int &z,vector<int>&dp){
	if(dp[n]!=-1) return dp[n];
	if(n<=0) return dp[n]=0;

    int a=INT_MIN,b=INT_MIN,c=INT_MIN;
	if(n-x>=0){
      a=fun(n-x,x,y,z,dp)+1;
	}
	if(n-y>=0){
      b=fun(n-y,x,y,z,dp)+1;
	}
	if(n-z>=0){
       c=fun(n-z,x,y,z,dp)+1;
	}
	return dp[n]=max(a,max(b,c));
}

    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(n+2,-1);
        int ans= fun(n,x,y,z,dp);
        if(ans<0) return 0;
        return ans;
    }

int main() {
    
    
        cout<<maximizeTheCuts(n,x,y,z)<<endl;

    

	return 0;
}  // } Driver Code Ends