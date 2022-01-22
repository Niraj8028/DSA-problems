#include <iostream>
using namespace std;

void heapify(int arr[],int i,int n){

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
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }

}
void buildheap(int arr[],int n){
    int idx=(n/2)-1;
    for(int i=idx; i>=0; i--){
        heapify(arr,i,n);
    }
}
int main(){
    int arr[]={3,4,9,6,8,20,10,12,18,9};
    int n=10;
    buildheap(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}