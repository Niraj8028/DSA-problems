#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    // int n,V;
    // cin>>V>>n;
    // vector<vector<int>>edges={{1,2,1},{3,2,2},{4,2,3},{2,5,5}};
    // // for(int i=0; i<n; i++){
    // //     int u, v, w;
    // //     cin>>u>>v>>w;

    // // }
    // for(int i=0; i<V; i++){
    //     for(int j=0; j<edges[0].size(); j++){
    //         cout<<edges[i][j]<<" ";
    //     }
    //     cout<<""<<endl;
    // }
    int V=1;
    vector<pair<int,int>>adj[V];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<edges[0].size(); j++){
    //         adj[0].push_back(edges[i][1]);
    //     }
    // }
    adj[0].push_back({1,1});
    pii x=adj[0][1];
    // int u=x.first;
    cout<<x;
    return 0;
} 