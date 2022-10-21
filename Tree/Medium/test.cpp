#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int solve(int n) {
        // code here
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(n%2==0){
            return 1+solve(n-(n/2));
        }
        else{
            return 1+solve(n-((n+1)/2));
        }
    }

int main(){
    int ans=solve(4);
    cout<<ans;
    return 0;
}