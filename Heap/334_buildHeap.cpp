#include <iostream>
using namespace std;

void heapify(int arr[],int n, int i){
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
void buildheap(int arr[],int n){
    int idx=(n/2)-1;
    for(int i=idx; i>=0; i--){
        heapify(arr,n,i);
    }
}
void printheap(int arr[],int n){
    for(int i=0; i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,5,4,6,13,10,9,8,15,17};
    int n=11;
    buildheap(arr,n);
    printheap(arr,n);
    return 0;
}