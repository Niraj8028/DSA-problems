#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;
#define pii pair<int,int>
int prims_algo(vector<pii>adj[],int n){
    vector<int>dist(n,INT_MAX);
    vector<bool>vis(n,false);

    vector<int>par(n);
    dist[0]=0;
    par[0]=-1;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,0});

    for(int j=0; j<n-1; j++){
        pii x=pq.top();
        pq.pop();
        
        int u=x.second;
        vis[u]=true;

        for(auto it : adj[u]){
            int v=it.first;
            int wt=it.second;
            if(vis[v]==false && wt<dist[v]){
                dist[v]=wt;
                par[v]=u;
                pq.push({dist[v],v});
            }
        }
        int ans=0;
        for(int i=0 i<n; i++){
            ans=ans+dist[i];
        }
        return ans;
    }

}
int main(){
    int v,e;
    cin>>v>>e;
    vector<pii>adj[v];
    for(int i=0; i<e; i++){
        int u,x,w;
        cin>>u>>v>>w;
        adj[u].push_back({x,w});
        adj[x].push_back({u,w});
    }
    prims_algo(adj,v);
    return 0;
}