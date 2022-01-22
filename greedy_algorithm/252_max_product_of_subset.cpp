#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
long long maxProduct(int arr[],int n){
    sort(arr,arr+n);
    long long product=1;
    int count_0=0;
    int neg_count=0;
    int max_neg=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count_0++;
            continue;
        }
        if(arr[i]<0){
            neg_count++;
            max_neg=max(max_neg,arr[i]);
        }
        product=product*arr[i];
    }
    
    if(count_0==n){
        return 0;
    }
    if(neg_count==1 && count_0+neg_count==n ){
        return 0;
    }
    if(neg_count%2==1){
        product=product/max_neg;
        return product;
    }
    return product;

}
int main(){
    int arr[]={2,3,4,5,-1,0};
    int n=6;
    cout<<maxProduct(arr,n);
    
    return 0;
}