#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int maxProfit(int K, int n, int arr[]) {
        
        int dp[n]={0};
        int mxPrice=arr[n-1];
        for(int i=n-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                dp[i]=max(dp[i+1],(mxPrice-arr[i]));
            }
            else{
                mxPrice=max(mxPrice,arr[i]);
                dp[i]=dp[i+1];
            }
        }
        
        int minPrice=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                dp[i]=max(dp[i-1],dp[i]+(arr[i]-minPrice));
            }
            else{
                minPrice=min(minPrice,arr[i]);
                dp[i]=max(dp[i],dp[i-1]);
            }
        }
        
        return dp[n-1];
        
    }
int main(){
    int K=2;
    int n=5;
    int arr[] = {100, 90, 80, 50, 25};
    cout<<maxProfit(K,n,arr);
    return 0;
}