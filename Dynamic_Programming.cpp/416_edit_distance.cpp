#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int lcs(string x,string y){
    int m=x.length();
    int n=y.length();
    int dp[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    

        
    return dp[m][n];
}
int minDist(string x,string y){
    int m=x.length();
    int n=y.length();
    int LCS=lcs(x,y);
    int a=m-LCS;
    int b=n-LCS;
    return a+b;
}

int main(){
    string x="ecfbefdcfca";
    string y="badfcbebbf";

    cout<<lcs(x,y);
    
    return 0;
}