#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxsum(int arr[],int n){
    sort(arr,arr+n);
    vector<int>a;
    for(int i=0; i<n/2; i++){
        a.push_back(arr[i]);
        a.push_back(arr[n-1-i]);
    }
    if(n%2!=0){
        a.push_back(arr[n/2]);
    }
    int sum=0;
    for(int i=1; i<n;i++){
        sum=sum+abs(a[i]-a[i-1]);
    }
    sum=sum+abs(a[n-1]-a[0]);
    return sum;

}
int main(){
    int arr[] = {4, 2, 1, 8};
    int n=4;
    cout<<maxsum(arr,n);
    
    return 0;
}