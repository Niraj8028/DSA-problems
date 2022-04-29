// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    int dp[1001][1001];
    int solve(int arr[],int i,int j){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=arr[i]+min(solve(arr,i+2,j),solve(arr,i+1,j-1));
        int b=arr[j]+min(solve(arr,i+1,j-1),solve(arr,i,j-2));
        return dp[i][j]=max(a,b);
    }
        
    long long maximumAmount(int arr[], int n){

        memset(dp,-1,sizeof(dp));
        int ans=solve(arr,0,n-1);
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends