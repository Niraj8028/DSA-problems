#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    int arr[10]={30,40,50,20,20,10,60,10,10,10};
    int len=0;
    int i=0; int j=0;
    int sum=0;
    int k=100;
    while(j<10 && i<=j){
        while(sum<k){
            sum+=arr[j];           
            len=max(len,j-i+1);
            j++;
        }
        while(sum>=k){
            sum=sum-arr[i];
            i++;
        }       
    }
    cout<<len;
    return 0;
}