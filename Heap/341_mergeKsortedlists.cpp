#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// typedef pair<int, pair<int,int>> pi;

    
//     vector<int>mergeKArrays(vector<vector<int>> arr, int k)
//     {
        
//         vector<int> v;
//         priority_queue<pi,vector<pi>,greater<pi> > minh;
//         for(int i=0;i<k;i++){
//             minh.push(make_pair(arr[i][0], make_pair(i,0)));
//         }
//         while(minh.size()>0){
//             pi x=minh.top();
//             minh.pop();
//             v.push_back(x.first);
//             int row=x.second.first;
//             int column=x.second.second;
//             if(column<k-1){
//                 minh.push(make_pair(arr[row][column+1], make_pair(row,column+1)));
//             }
//         }
//         return v;
//     }

#define pii pair<int,pair<int,int>>

vector<int>mergeKArrays(vector<vector<int>>arr,int k){
    vector<int>ans;
    priority_queue<pii,vector<pii>,greater<pii>>pq;

    for(int i=0; i<k; i++){
        pq.push(make_pair(arr[i][0],make_pair(i,0)));
    }
    while(pq.size()>0){
        pii x=pq.top();
        pq.pop();
        ans.push_back(x.first);
        int row=x.second.first;
        int column=x.second.second;
        if(column<k-1){
            pq.push(make_pair(arr[row][column+1],make_pair(row,column+1)));
        }
    
    }
    
    return ans;
    
}
int main(){
    vector<vector<int>>arr={{1,3,4},{2,5,6,1},{7,8}};
    int k=3;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<< " ";
        }
        
    }

    
    
    return 0;
}