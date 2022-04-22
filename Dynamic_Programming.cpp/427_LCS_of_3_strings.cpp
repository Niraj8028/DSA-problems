#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int dp[1001][1001][1001];
int lcs(string x,string y,string z){
    int m=y.length();
    int n=z.length();
    int l=x.length();

    for(int i=1; i<=l; i++){
        for(int j=1; j<=m; j++){
            for(int k=0; k<=n; k++){
                if(i==0 || j==0 || k==0){
                    dp[i][j][k]=0;
                }
            }
        }
    }
    for(int i=1; i<=l; i++){
        for(int j=1; j<=m; j++){
            for(int k=0; k<=n; k++){
                if(x[i-1]==y[j-1] && y[j-1]==z[k-1]){
                    d[i][j][k]=1+dp[i-1][j-1][k-1];
                }
                else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][k][k-1]));
                }
            }
        }
    }
    return dp[l][m][n];
}
int main(){
    
    return 0;
}