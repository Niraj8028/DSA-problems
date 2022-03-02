#include <iostream>
#include <vector>
using namespace std;

bool isBipartite(int node,int parent,vector<int>&col,vector<int>reverse[]){
    col[node]=1;

    for(auto it: reverse[node]){
        if(!col[it]){
            col[it]=1-col[node];
            if(isBipartite(it,node,col,reverse)){
                return true;
            }
        }
        else if(it!=parent && col[node]==col[it]){
            return false;
        }
    }
    return true;
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int>graph[v];
    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int>reverse[v];

    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            if(i==j){
                continue;
            }
            if(graph[i][j]==0){
                reverse[i].push_back(j);
                reverse[j].push_back(i);
            }
        }
    }
    vector<int>col(v,-1);
    if(isBipartite(0,-1,col,reverse)){
        cout<<"Two cliques";
    }else{
        cout<<"Not possible";
    }

    return 0;
}