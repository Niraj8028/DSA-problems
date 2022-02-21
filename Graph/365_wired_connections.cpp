#include <iostream>
#include <vector>

using namespace std;
void dfs(int node,vector<int>&vis, vector<vector<int>>&connections){
        vis[node]=1;
        
        for(auto it: adj[it]){
            if(!vis[it]){
                dfs(it,vis,connections);
            }
            return;
        }
        return;
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size();
        if(m<n-1){
            return -1;
        }
        vector<int>vis(n,0);
        int count;
        for(int i=0; i<n ; i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,connections);
            }
        }
        return count-1;
    }
int main(){
    connections[4][1] = [[0,1],[0,2],[0,3],[1,2]];
    int n=4;
    
    return 0;
}