#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    int arr[11]={0,5,8,15,29,47,48,66,70,78,81};
    int i=0;
    int j=0;
    int k=15;
    while(j<11 && i<=j){
        while(arr[j]-arr[i]<k){
            j++;
        }
        while(arr[j]-arr[i]>k){
            i++;
        }
        if(arr[j]-arr[i]==k){
            cout<<i+1<<" "<<j;
            j++;      
        }       
    }
    return 0;
}