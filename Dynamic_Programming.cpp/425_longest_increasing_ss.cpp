// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
          int dp[n+1];
      int maxi=0;
      for(int i=0;i<n;i++){
          dp[i]=1;
      }
      for(int i=0;i<n;i++){
          for(int j=0;j<i;j++){
              if(a[i]>a[j] && dp[i]<dp[j]+1){
                  dp[i]=dp[j]+1;
              }
          }
      }
      for(int i=0;i<n;i++){
          if(maxi<dp[i]){
              maxi=dp[i];
          }
      }
      return maxi;
   
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends