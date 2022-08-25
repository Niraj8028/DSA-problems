#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>


int solve(int cur,int val,vector<vector<int> > p,vector<vector<int> > c,map<pair<int,int>,int> &dp) {
    
    int n = c.size();
    int m = c[0].size();
    if(cur==n) {
        return 0;
    }
    if(dp.find({cur,val})!=dp.end()) {
        return dp[{cur,val}];
    }
    int ans = INT_MAX;
    for(int i=0;i<m;i++) {
        
        int need = 0;
        if(val-p[cur][i]<0) {
            need = abs(val-p[cur][i]);
        }
        
        int curans = need + solve(cur+1,need+val-p[cur][i]+c[cur][i],p,c,dp);
        ans = min(curans,ans);
    }
    return dp[{cur,val}] = ans;

}
int hunt(vector<vector<int> > p,vector<vector<int> > c) {
    map<pair<int,int>,int> dp;
    
    int ans =  solve(0,0,p,c,dp);
    if(ans==INT_MAX) {
        ans = -1;
    }
    return ans;
}

int main(){
    vector<vector<int>>p={{3,2,5},{8,9,3},{4,7,6}};
    
    vector<vector<int>>c={{1,1,1},{1,1,1},{1,1,1}};
    int ans=hunt(p,c);
    cout<<ans;
}
