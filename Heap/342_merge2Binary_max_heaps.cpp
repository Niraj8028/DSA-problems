#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void buildheap(int arr[], int n){
    int idx=(n/2)-1;
    for(int i=idx; i>=0; i--){
        heapify(arr,n,i);
    }
}
void mergeheaps(int merged[],int a[],int b[],int n, int m){
    for(int i=0; i<n; i++){
        merged[i]=a[i];
    }
    for(int i=0; i<m; i++){
        merged[n+i]=b[i];
    }
    buildheap(merged,m+n);
}
int main(){
    int a[]={10,5,6,2};
    int b[]={12,7,9};
    int n=4;
    int m=3;
    int merged[m+n];
    mergeheaps(merged,a,b,n,m);
    for(int i=0; i<(m+n); i++){
        cout<<merged[i]<<" ";
    }
    
    return 0;
}