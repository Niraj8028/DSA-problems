#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int maxGold(int n, int m, vector<vector<int>> arr)
    {
        for(int col=m-2; col>=0; col--){
            for(int row=0; row<n; row++){
                if(col==m-1){
                    arr[row][col]=arr[row][col];
                }
                else if(row==0){
                    arr[row][col]+=max(arr[row][col+1],arr[row+1][col+1]);
                }
                else if(row=n-1){
                    arr[row][col]+=max(arr[row][col+1],arr[row-1][col+1]);
                }
                else{
                    arr[row][col]+=max(arr[row+1][col+1],max(arr[row][col+1],arr[row-1][col+1]));
                }
            }
            
        }
        int res=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
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