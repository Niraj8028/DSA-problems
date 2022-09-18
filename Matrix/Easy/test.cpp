#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

vector<int>maximize(vector<int>&arr,vector<int>&rep){
    if(arr.size()==0){
        return {-1};
    }
    if(rep.size()==0){
        return arr;
    }
    sort(rep.begin(),rep.end(),greater<int>());
    int j=0;
    int i=0;
    while(j<rep.size()){
        while(i<arr.size()){
            if(rep[j]>arr[i]){
                arr[i]=rep[j];
                j++;
                i++;
            }
            else{
                i++;
            }
            
        }
        break;
    }
    return arr;

}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        vector<int>rep(m);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>rep[i];
        }
        maximize(arr,rep);
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }
   
    
    return 0;
}