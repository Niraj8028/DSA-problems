#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int,int>

int maxStocks(int arr[],int n,int k){
    vector<pii>v;
    for(int i=0; i<n; i++){
        int x=arr[i];
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    int stocks=0;
    int i=0;
    while(k>0){
        if(k>=v[i].first*(v[i].second)){
            k=k-(v[i].first*(v[i].second));
            stocks=stocks+v[i].second;
            i++;
            
        }
        else{
            stocks+=k/(v[i].first);
            k=k-(v[i].first*(k/(v[i].first)));
            break;
        }
    }
    return stocks;


}
int main(){
    int arr[]={10,7,19};
    int n=3;
    int k=45;
    cout<<maxStocks(arr,n,k);
    
    return 0;
}