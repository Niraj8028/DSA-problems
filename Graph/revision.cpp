#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
vi indegree;
vi outdegree;
void Dfs(vi adj[],node,vi &vis,int timer){
    vis[node]=1;
    indegree[node]=timer++;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(adj,it,vis,timer);
        }
    }
    outdegree[node]=timer++;
}

bool check(int x,int y){
    if(indegree[y]>indegree[x] && outdegree[x]>outdegree[y]){
        return true;
    }
}

int main(){
    int v,e;
    vector<vector<int>>adj(v);
    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0,timer,adj);
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int type,x,y;
        cin>>type>>x>>y;
        if(!check(x,y) && !(check(y,x))){
            cout<<"NO";
            continue;
        }
        if(type==0){
            if(check(y,x)){
                cout<<"yes";
            }
            cout<<"no";
        }
        else if(type==1){
            if(check(x,y)){
                cout<<"yes";

            }
            cout<<"no";
        }
    }  
    return 0;
}