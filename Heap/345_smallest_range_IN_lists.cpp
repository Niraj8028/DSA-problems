#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

class element{
    public:
    int data;
    int row;
    int col;
    int arraysize;
    element(int val, int i,int j, int size){
        data=val;
        row=i;
        col=j;
        arraysize=size;
    }
};
struct compare{
    bool operator()(element a,element b){
        return a.data>b.data;
    }
};
vector<int> smallestRange(vector<vector<int>> &arr){

    int mn=INT_MAX;
    int mx=INT_MIN;
    int range=INT_MAX;
    int high,low;
    priority_queue<element,vector<element>,compare>pq;

    int k=arr.size();

    for(int i=0; i<k; i++){
        pq.push(element(arr[i][0],i,0,arr[i].size()));
        int mn=min(mn,arr[i][0]);
        int mx=max(mx,arr[i][0]);
    }

    while(!pq.empty()){

        element temp=pq.top();
        int maybemin=temp.data;
        if(range>mx-maybemin){
            mn=maybemin;
            high=mx;
            low=mn;
            range=mx-mn;
        }
        temp.col=temp.col+1;
        if(temp.col==temp.arraysize-1){
            break;
        }
        pq.push(element(arr[temp.row][temp.col],temp.row,temp.col,temp.arraysize));
        mx=max(mx,arr[temp.row][temp.col]);
    }
    vector<int>v{high,low};
    return v;

}
 

int main(){
    vector<vector<int>>arr={{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<int>ans=smallestRange(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    
    return 0;
}