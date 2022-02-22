#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10000];
int rank[10000];
class node{
    int u;
    int v; 
    int w;
    node(int x,int y,int z){
        u=x;
        v=y;
        w=z;
    }
};
int findparent(int x,int parent[]){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=findparent(parent[x],parent);
}
void unions(int x,int y,int parent[],int rank[]){
    int x=findparent(x,parent);
    int y=findparent(y,parent);

    if(rank[x]>rank[y]){
        parent[y]=x;
    }
    else if(rank[y]>rank[x]){
        parent[x]=y;
    }
    else{
        parent[x]=y;
        rank[y]++;
    }    
}

bool comp(node a,node b){
    return a.w<b.w;
}
int krushkals_algo(vector<node>edges,int n){
    for(int i=0; i<n; i++){
        parent[i]=i;
        rank[i]=0;
    }
    int cost=0;
    vector<pair<int,int>>ans;
    for(auto it :edges){
        if(findparent(it.u)!=findparent(it.v)){
            ans.push_back({it.u,it.v});
            cost+=it.w;
            unions(it.u,it.v,parent,rank);
        }
    }

}
int main(){
    
    return 0;
}