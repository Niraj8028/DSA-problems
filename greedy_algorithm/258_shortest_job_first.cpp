#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define vii vector<vector<int>>
#define vi vector<int>
bool compare(vi a,vi b){
    if(a[1]==b[1]){
        if(a[2]==b[2]){
            return a[0]<b[0];
        }
        else{
            return a[2]<b[2];
        }
    }
    return a[1]<b[1];
}
vector<int>sjf(vector<vector<int>>a,int n){
    sort(a.begin(),a.end(),compare);
    priority_queue<vi,vii,greater<vi>>pq;
    pq.push({a[0][2],a[0][1],a[0][0]});
    int ct=0;
    vi ans;
    int i=1;
    while(!pq.empty()){
        int bt=pq.top()[0];
        int id=pq.top()[2];
        pq.pop();
        ans.push_back(id);
        
        ct+=bt;
        
    
        while(true){
            if(i<n && a[i][1]<=ct){
                pq.push({a[i][2],a[i][1],a[i][0]});
                i++;
            }
            else{
                break;
            }
        }
    }
    return ans;
    


}
int main(){
    vii v={{1,2,3},{2,0,4},{3,4,2},{4,5,4}};
    int n=4;
    vi ans=sjf(v,n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}