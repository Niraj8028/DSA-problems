#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int dijkstra_Algo(int src,int dest,vector<pair<int,int>>adj[]){
    vector<int>dist(v,INT_MAX);
    dist[src]=0;
    queue<int>q;
    
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>>adj[v];
    for(int i=0; i<e; i++){
        int u,v;
        adj[u].push_back(v,0);
        adj[v].push_back(u,1);
    }

    return 0;
}