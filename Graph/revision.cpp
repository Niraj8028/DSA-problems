#include <iostream>
#include <vector>
using namespace std;


bool isPath(vector<node>edges,int node,int k,int e,vector<int>&vis){
    vis[node]=1;
    if(k<=0){
        return true;
    }
    for(auto it: adj[node]){
        int u=it.first;
        int v=it.second;
        if(!vis[u]){
            if(isPath(edges,u,k-v,e,vis)){
                return true;
            }
        }
    }
    vis[node]=0;
    return false;

}
int main(){
    int e;
    cin>>e;
    int n;
    cin>>n;
    vector<pair<int,int>>adj[n];
    int k=25;
    vector<int>vis(n,0);
    for(int i=0; i<e; i++){
        int u,v,w;
        adj[u].push_back({v,w});
        
    }
    int src=0;
    if(isPath(edges,src,k,e,vis)){
        cout<<"The path exists";
    }
    else{
        cout<<"path does not exist";
    }
    return 0;
}