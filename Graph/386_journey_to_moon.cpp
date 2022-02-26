#include <iostream>
#include <vector>
using namespace std;
void dfs(int node,vector<int>&components,vector<int>&vis,vector<int>adj[],int &count){
    vis[node]=1;
    count++;
    for(auto it :adj[node]){
        if(!vis[it]){
            dfs(it,components,vis,adj,count);
        }
    }
    components.push_back(count);
}

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    vector<int>adj[n];
    for(int i=0; i<p; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        
    }
    vector<int>components;
    vector<int>vis(n,0);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            int count=0;
            dfs(i,components,vis,adj,count);
        }
    }
    int totalPairs=((n)*(n-1))/2;
    for(int i=0; i<components.size(); i++){
        int x=(components[i]*components[i-1])/2;
        totalPairs=totalPairs-x;
    }
    return 0;
}