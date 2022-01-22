#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maxSum(int arr[],int n){
    sort(arr,arr+n);
    vector<int>a;

    for(int i=0; i<n/2; i++){
        a.push_back(arr[i]);
        a.push_back(arr[n-1-i]);

    }
    if(n%2!=0){
        a.push_back(arr[(n/2)]);
    }
    int maxsum=0;
    for(int i=0; i<n; i++){
        maxsum=maxsum+abs(a[i]-a[i+1]);
    }
    maxsum=maxsum+abs(a[n-1]-a[0]);
    return maxsum;

}
int main(){
    int a[] = { 1, 2, 4, 8 };
    int n = sizeof(a) / sizeof(a[0]);
    cout<<maxSum(a,n);
    
    return 0;
}