// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

    int longestSubsequence(int n, int arr[])
    {
        // code here
        int dp[n];
        for(int i=0; i<n; i++){
            dp[i]=1;
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i]-arr[j]==1 || arr[j]-arr[i]==1){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int mx=0;
        for(int i=0; i<n; i++){
            mx=max(mx,dp[i]);
        }
        return mx;
    }


int main(){
    int n=7;
    int arr[]={10, 9, 4, 5, 4, 8, 6};
    cout<<longestSubsequence(n,arr);
    return 0;
}  // } Driver Code Ends