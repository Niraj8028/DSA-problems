#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    int ans=1;
    int  k=2;
    int n=5;
    for(int i=0; i<k; i++){
        ans=ans*(n-i);
    }
    cout<<ans;
    return 0;
}