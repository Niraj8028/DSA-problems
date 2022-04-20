#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

    int maxGold(int n, int m, vector<vector<int>> M)
   {
       
       for(int i=m-2;i>=0;i--){
           for(int j=0;j<n;j++){
               int right=M[j][i+1];
               int up=(j==0)? 0:M[j-1][i+1];
               int down=(j==n-1)? 0:M[j+1][i+1];
               M[j][i]=M[j][i]+max(up, max(right,down));
           }
       }
      
       int res=M[0][0];
       for(int i=1;i<n;i++){
           res=max(res,M[i][0]);
       }
       return res;
   }

int main(){
    int m=4;
    int n=4;
    vector<vector<int>>arr={{1,3,1,5},{2,2,4,1},{5,0,2,3},{0,6,1,2}};
    cout<<maxGold(n,m,arr);
    return 0;
}