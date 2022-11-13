#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int dp[1000][3];


int solve(int time[3],int profit[3],int n){
    if(n<=4){
        return 0;
    }
    for(int i=0; i<=4; i++){
        for(int j=0; j<3; j++){
            dp[i][j]=0;
        }
    }
    for(int i=5; i<=n; i++){
        for(int j=0; j<3; j++){
            if(i>=time[j]){
                int temp=max({dp[i-time[j]][0],dp[i-time[j]][1],dp[i-time[j]][2]});
                dp[i][j]=(profit[j]*(i-time[j]))+temp;
            }
            else{
                dp[i][j]=0;
            }
        }  
    }

    int mx=INT_MIN;
    for(int i=0; i<3; i++){
        mx=max(mx,dp[n][i]);
    }
    return mx;
}

int main(){
    int time[3]={5,4,10};
    int profit[3]={1500,1000,3000};
    int n=13;
    if(n<=4){
        cout<<"0";
    }
    int ans= solve(time,profit,n);
    cout<<"ans "<<ans;
    return 0;
}