// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++



    int nCr(int n, int r){
        int mod=1e9+7;
        int dp[n+1][r+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=r; j++){
                if(i==j || j==0){
                    dp[i][j]=1;
                }
                else if(i<j){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
                }
            }
        }
        for(int i=0; i<=n; i++){
            for(int j=0; j<=r; j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
            
        return dp[n][r];
    }


// { Driver Code Starts.

int main(){
    
    
    int n, r;
    
    cout<<nCr(15,3)<<endl;
    
    return 0;
}  // } Driver Code Ends