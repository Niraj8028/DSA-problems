#include <iostream>
#include <queue>
using namespace std;

int minimumCost(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>pq;
    int cost=0;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    while(pq.size()>=2){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        cost=cost+first+second;
        pq.push(first+second);

    }
    return cost;
}
int main(){
    int arr[]={4,3,2,6};
    int n=4;
    cout<<minimumCost(arr,n);
    return 0;
}