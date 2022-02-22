#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class node{
    int u;
    int v;
    int w;
    node(int a,int b, int c){
        u=a;
        v=b;
        w=c;
    }
};
bool isNegativeCycle(vector<node>edges,int n){
    vector<int>dist(n,INT_MAX);
    int src=0;
    dist[0]=0;
    for(int i=0; i<n-1; i++){
        for(auto it: edges){
            if(dist[it.u]+it.w<dist[it.v]){
                dist[it.v]=dist[it.u]+it.w;
            }
        }
    }
    for(auto it: edges){
        if(dist[it.u]+it.w<dist[it.v]){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    
    return 0;
}