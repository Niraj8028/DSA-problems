#include <iostream>
#include <vector>
using namespace std;
bool isPath(int node,vector<pair<int,int>>adj[],vector<int>&vis,int k){
    vis[node]=1;
    if(k<=0){
        return true;
    }
    for(auto it :adj[node]){
        int u=it.first;
        int w=it.second;
        if(!vis[u]){
            if(isPath(u,adj,vis,k-w)){
                return true;
            }
        }
    }
    vis[node]=0;
    return false;
}

int main(){
    int n,e;
    vector<int >vis(n,0);
    int src=0;
    int k;
    vector<pair<int,int>>adj[n];
    isPath(src,adj,vis,k);
    return 0;
}