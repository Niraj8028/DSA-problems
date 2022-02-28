#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

bool IsPossible(int x,int y, int z){
    unordered_map<int,int>vis;
    int dir[]={x,-x,y,-y};
    queue<int>q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        if(t==z){
            return true;
        }
        for(int i=0; i<4; i++){
            int temp=t+dir[i];
            if(temp==z){
                return true;
            }
            if(temp<0 || temp>x+y){
                continue;
            }
            if(!vis[temp]){
                q.push(temp);
                vis[temp]=1;
            }
            
            
        }
    }
    return false;

}
int main(){
    
    return 0;
}