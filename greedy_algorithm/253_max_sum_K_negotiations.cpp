#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int maxsum(int arr[],int n, int k){
    sort(arr,arr+n);
    
    long long sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0 && k>0){
            arr[i]=-arr[i];
            k--;
        }
    }
    int mn=INT_MAX;
    for(int i=0; i<n; i++){
        mn=min(mn,arr[i]);
        sum=sum+arr[i];
    }
    if(k%2==0){
        return sum;
    }
    else{
        return sum-(2*mn);
    }
    
}
int main(){
    int arr[]={5,-2,5,-4,5,-12,5,5,5,20};
    int n=10;
    int k=5;
    cout<<maxsum(arr,n,k);
    
    return 0;
}