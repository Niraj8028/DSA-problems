#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&vis,stack<int>&st){
    vis[node]=1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,st);
        }
    }
    st.push(node);
}
void dfsTrans(int node,vector<int>trans[],vector<int>&vis){
    vis[node]=1;
    cout<<node<<" ";
    for(auto it:trans[node]){
        if(!vis[it]){
            dfsTrans(it,trans,vis);
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    for(int i=0; i<e; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    stack<int>st;
    vector<int>vis(n,0);
    for(int i=0; i<n;i++){
        if(!vis[i]){
            dfs(i,adj,vis,st);
        }
    }
    vector<int>trans[n];
    for(int i=0; i<n; i++){
        vis[i]=0;
        for(auto it :adj[i]){
            trans[it].push_back(i);
        }
    }
    while(!st.empty()){
        int x=st.top();
        st.pop();
        if(!vis[x]){
            cout<<"SCC:"<<endl;
            dfsTrans(x,trans,vis);
        }

    }
    
    return 0;
}