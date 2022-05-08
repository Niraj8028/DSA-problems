#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
vector<int> minPartition(int N)
    {
        // code here
        vector<int>coins={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        sort(coins.begin(),coins.end(),greater<int>());
        int i=0;
        vector<int>ans;
        while(N!=0){
            if(N>=coins[i]){
                N-=coins[i];
                ans.push_back(coins[i]);
            }
            else{
                i++;
            }
        }
        
    }
int main(){
    int n=43;
    cout<<minPartition(n);
    return 0;
}