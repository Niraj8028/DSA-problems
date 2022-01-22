#include <iostream>
#include <algorithm>
using namespace std;

void max_expo_no(int arr[],int n){
    int count_1=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count_1++;
        }
    }
    for(int i=0; i<count_1; i++){
        cout<<"1";
    }
    
    
    for(int i=0; i<(n-count_1); i++){
        if((n-count_1==2 && arr[0]==3 && arr[1]==2)){
        cout<<"23";
        break;
        
        }
        cout<<arr[i];

        
    }
    return;
    

}
int main(){
    int arr[]={2,3};
    int n=2;
    max_expo_no(arr,n);
    
    return 0;
}