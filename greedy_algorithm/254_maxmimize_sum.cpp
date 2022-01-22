#include <iostream>
#include <algorithm>
using namespace std;
int maximize(int arr[],int n){
    sort(arr,arr+n);
    int sum=0;
    for(int i=0; i<n; i++){
        sum=((sum%mod)+(arr[i]*1ll*i)%mod)%mod;
    }
    return sum;
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    cout<<maximize(arr,n);
    
    return 0;
}