
#include <bits/stdc++.h>
using namespace std;

  bool subsetSum(int arr[],int sum,int n){
      bool t[n+1][sum+1];
      for(int i=0;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
              if(i==0)
                t[i][j]=false;
              if(j==0)
                t[i][j]=true;
          }
      }
      
      for(int i=1;i<n+1;i++){
          for(int j=1;j<sum+1;j++){
              if(arr[i-1]<=j){
                  t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
              } else {
                  t[i][j]=t[i-1][j];
              }
          }
      }
      return t[n][sum];
  }
   int equalPartition(int N, int arr[])
   {
      int sum = accumulate(arr,arr+N,0);
      if(sum%2==0){
          return subsetSum(arr,sum/2,N);
      }
      return 0;
   }

int main(){
    int t;
    cin>>t;
    
        equalPartition(N, arr)
    
    return 0;
}