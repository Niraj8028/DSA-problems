#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void WaterJug(int x,int y,int z){
    vector<int>vis(x+y,0);
    queue<int>q;
    q.push(0);
    vis[0]=1;
    int dir[]={x,-x,y,-y};
    while(!q.empty()){
        int t=q.front();
        vis[t]=1;
        q.pop();
        if(t==z){
            return;
        }
        for(int i=0; i<4;i++){
            int water=t+dir[i];
            if(water<=0 || water>=x+y){
                continue;
            }
            if(water==z){
                return;
            }
            if(!vis[water]){
                q.push(water);
                vis[water]=1;
            }
        }


    }
}
int main(){
    
    return 0;
}