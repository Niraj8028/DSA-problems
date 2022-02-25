#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;



int main(){
    int ladders;
    unordered_map<int,int>lad;
    unordered_map<int,int>snake;
    cin>>ladders;
    int snakes;
    cin>>snakes;
    for(int i=0; i<ladders; i++){
        int u, v;
        cin>>u>>v;
        lad[u]=v;
    }
    for(int i=0; i<snakes; i++){
        int u, v;
        cin>>u>>v;
        snake[u]=v;
    }
    vector<int>vis(101,0);
    vis[1]=0;
    queue<int>q;
    q.push(1);
    bool found=false;
    int count;
    while(!q.empty() && !found ){
        int qz=q.size();
        while(qz--){
            int temp=q.front();
            for(int die=1; die<=6; die++){
                if(temp+die==100){
                    found=true;
                }
                if(temp+die<=100 && lad[temp+die] && !vis[lad[temp+die]]){
                    vis[lad[temp+die]]=1;
                    
                    if(temp+die==100){
                        found=true;
                    }
                    q.push(lad[temp+die]);
                }
                else if(temp+die<=100 && snake[temp+die] && !vis[snake[temp+die]]){
                    vis[snake[temp+die]]=true;
                    q.push(snake[temp+die]);
                }
                else if(temp+die<=100 && !lad[temp+die] && !snake[temp+die] && !vis[temp+die]){
                    vis[temp+die]=true;
                    if(temp+die==100){
                        found=true;
                    }
                }
            }
        }
        count++;

    }
    if(found){
        cout<<count;
    }
    else{
        cout<<"not possible";
    }
    return 0;
}