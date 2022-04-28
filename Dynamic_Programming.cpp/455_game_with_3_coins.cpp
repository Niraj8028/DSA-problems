// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int solve(int N,int x,int y,vector<int>&dp){
	    if(N==0){
	        return dp[0]=0;
	    }
	    if(N==1){
	        return dp[1]=1;
	    }
	    for(int i=2; i<N; i++){
	        int a,b,c;
	        if(i-1>=0){
	           a=dp[i-1];
	        }
	        if(i-x>=0){
	            b=dp[i-x];
	        }
	        if(i-y>=0){
	            c=dp[i-y];
	        }
	        if(a==0 || b==0 || c==0){
	            dp[i]=1;
	        }
	        
	    }
	    for(int i=0; i<N; i++){
	        cout<<dp[i]<<" ";
	    }
	    return dp[N];
	}
	
	int findWinner(int N, int x, int y)
	{
		// Your code goes here
		vector<int>dp(N+1,-1);
		int ans=solve(N,x,y,dp);
		return ans;
	}

};
	

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n, x, y;
       	cin >> n >> x >> y;

       

        Solution ob;
        cout << ob.findWinner(n, x, y);
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends