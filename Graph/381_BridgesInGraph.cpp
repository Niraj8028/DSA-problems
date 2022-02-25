#include <iostream>
#include <vector>
using namespace std;
#define pii pair<int,int>
void dfs(int node,int parent,vector<int>&time,vector<int>&mintime,vector<int>adj[],int n,int &count){
    time[node]=min[node]=count;
    count++;
    vis[node]=1;

    for(auto it: adj[node]){
        if(!vis[it]){
            if(it==parent){
                continue;
            }
            if(!vis[it]){
                dfs(it,node,time,mintime,adj,n,count);
                low[node]=min(low[node],low[it]);
                if(low[it]>time[node]){
                    cout<<it<<"->"<<it;
                }
            }
            else if(
                low[node]=min(low[node],low[])
            )
            
            
        }
    }
}

vector<pii>bridges(vector<int>adj[],int n){
    vector<int>time(n,0);
    vector<int>mintime(n,0);
    vector<int>vis(n,0);
    int count=1;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1,time,mintime,adj,n,count);
        }
    }
}

int main(){
    
    return 0;
}