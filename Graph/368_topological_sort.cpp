#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int>topoSort(vector<int>adj[],int n){
    vector<int>inDeg(n,0);
    queue<int>q;
    vector<int>ans;
    for(auto it: adj[0]){
        inDeg[it]++;
    }
    for(int i=0; i<n; i++){
        if(inDeg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty){
        int temp=q.front();
        q.pop();
        for(auto it : adj[temp]){
            inDeg[it]--;
            if(inDeg[it]==0){
                q.push(it);
            }
        }
    }
}
int main(){
    
    return 0;
}