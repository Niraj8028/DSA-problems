#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int minCost(int a[][4],int t[][4],int e[],int x[]){
    int l1[4];
    int l2[4];
    l1[0]=e[0]+a[0][0];
    l2[0]=e[1]+a[1][0];
    for(int i=1; i<4; i++){
        l1[i]=min(l1[i-1]+a[0][i],l2[i-1]+a[0][i]+t[1][i]);
        l2[i]=min(l2[i-1]+a[1][i],l1[i-1]+a[1][i]+t[0][i]);
    }
    l1[3]=l1[3]+x[0];
    l2[3]=l2[3]+x[1];

    return min(l1[3],l2[3]);
}

int main(){
    int NUM_STATION=4;
    int a[][NUM_STATION] = {{4, 5, 3, 2}, 
                            {2, 10, 1, 4}}; 
    int t[][NUM_STATION] = {{0, 7, 4, 5}, 
                            {0, 9, 2, 8}}; 
    int e[] = {10, 12}, x[] = {18, 7}; 
  
    cout << minCost(a, t, e, x); 
    return 0;
}