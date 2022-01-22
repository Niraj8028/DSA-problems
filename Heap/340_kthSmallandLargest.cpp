#include <iostream>
#include <queue>
using namespace std;

void klargestEle(int arr[],int n, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    int arr[]={7,4,10,3,20,15};
    int n=6;
    int k=2;
    klargestEle(arr,n,k);
    
    
    return 0;
}