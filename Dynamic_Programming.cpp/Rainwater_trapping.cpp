// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

    
        // code here
       long long trappingWater(int arr[], int n){
    
       int left[n] = {0};
       int right[n] = {0};
       
       left[0] = arr[0];
       for(int i=1; i<n; i++){
           left[i] = max(arr[i], left[i-1]);
       }
       
       right[n-1] = arr[n-1];
       for(int j=n-2; j>=0; j--){
           right[j] = max(arr[j], right[j+1]);
       }
       
       long long int water = 0;
       for(int i=0; i<n; i++){
           water += min(left[i], right[i]) - arr[i];
       }
       return water;
   }
    


int main(){
    int n=3;
    int arr[]={6,9,9};
    cout<<trappingWater(arr,n);
    return 0;
}  // } Driver Code Ends