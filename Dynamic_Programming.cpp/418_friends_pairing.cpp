
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

    long long int dp[10001];
   long long int mod= 1e9+7;
   int helper(int n){
       if(n<=2){
           return n;
       }
       if(dp[n]!= -1){
           return dp[n];
       }
       long long int a= helper(n-1)%mod;
       long long int b= ((n-1)%mod)*(helper(n-2)%mod)%mod;
       return dp[n]=(a+b)%mod;
   }
   int countFriendsPairings(int n) 
   { 
       
       memset(dp,-1,sizeof(dp));
       return helper(n)%mod;
   }
   
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    
} 
  // } Driver Code Ends