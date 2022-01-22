#include <iostream>
#include <vector>
#include <climits>

using namespace std;
#define pii pair<int,int>
int minwork(int arr[],int n){
    vector<pii>buy;
    vector<pii>sell;
    for(int i=0; i<n;i++){
        if(arr[i]<0){
            sell.push_back({arr[i],i});
        }
        else{
            buy.push_back({arr[i],i});
        }
    }
    int ans=0;
    int i=0; 
    int j=0;
    while(i<buy.size() && j<sell.size()){
        int x=min(buy[i].first,-sell[j].first);
        buy[i].first=buy[i].first-x;
        sell[j].first=sell[j].first+x;
        
        ans=ans+(x*abs(buy[i].second-sell[j].second));
        
        if(buy[i].first==0){
            i++;
        }
        if(sell[j].first==0){
            j++;
        }

    }
    return ans;
}
int main(){
    int arr[]={5,-4,1,-3,1};
    int n=5;
    cout<<minwork(arr,n);
    
    return 0;
}