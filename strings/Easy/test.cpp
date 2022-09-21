#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int getSum(int n){
    int sum = 0;
    while(n!=0) {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

vector<int>prodDelivery(vector<int>orderID){
    vector<int>ans;
    for(int i=0; i<orderID.size(); i++){
        int x=getSum(orderID[i]);
        ans.push_back(x);
    }
    return ans;

}

int main(){
    vector<int>arr={43,345,20,987};
    vector<int>ans=prodDelivery(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}