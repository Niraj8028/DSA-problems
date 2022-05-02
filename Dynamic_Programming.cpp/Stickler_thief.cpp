// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int dp[10001];
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        dp[0]=arr[0];
        dp[1]=max(dp[0],arr[1]);
        int ans=INT_MIN;
        for(int i=2; i<n; i++){
            dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
            ans=max(ans,dp[i]);
        }
        return max(ans,dp[1]);
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends