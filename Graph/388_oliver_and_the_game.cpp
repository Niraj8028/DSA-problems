#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
vector<int>Intime(1000);
vector<int>Outtime(1000);
int timer=1;
void dfs(int node,int &timer,vector<vector<int>>adj){
    Intime[node]=timer++;
    for(auto it: adj[node]){
        if(it==node){
            continue;
        }
        dfs(it,timer,adj);
    }
    Outtime[node]=timer++;
}
bool check(int x,int y){
    if(Intime[x]<Intime[y] && Outtime[x]>Outtime[y]){
        return true;
    }
    return false;
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