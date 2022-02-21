#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
class node{
    int u;
    int v;
    int wt;
    node(int a,int b,int c){
        u=a;
        v=b;
        wt=c;
    }
};
void dikstra_algo(vector<node>adj,int n){
    int src=0;
    vector<int>vis(n,0);
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>>pq;
    pq.push({0,src});
    while(!pq.empty()){
        pair<int,int>temp=pq.top();
        pq.pop();
        int x=temp.second;
        int dist=temp.first;
        for(auto it :adj[x]){
            if(dist[it.v]>it.wt+dist[x]){
                dist[it.v]=it.wt+dist[x];
                pq.push({dist[it.v],it.v});
            }
        }
        
    }
    return;
}

int main(){
    vector<node>adj;
    for(int i=0; i<7; i++){
        int x,y,z;
        cin>>x>>y>>z;
        

    }
    
    return 0;
}