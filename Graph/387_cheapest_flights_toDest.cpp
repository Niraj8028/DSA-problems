#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void minCost(int node,vector<int>&vis,vector<vector<int>>adj,vector<vector<pair<int,int>>>cost,int k,int src,int dest,int mincost){
    vis[node]=1;
    int fare=0;
    for(auto it:adj[node]){
        
    }
}

int minCost(vector<vector<int>>&flight,int n,int src,int dest,int k){
    vector<vector<int>>adj(n);
    vector<vector<pair<int,int>>>cost;

    for(int i=0; i<n; i++){
        adj(flight[i][0]).push_back(flight[i][1]);
        cost(flight[i][0].push_back({flight[i][1],flight[i][w]}));
    }
    int mincost=INT_MAX;
    vector<int>vis(n,0);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            solve(i,vis,adj,cost,k,src,dest);
        }
    }
    

}

int main(){
    
    return 0;
}