#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

int count(int arr[],int n,int k){
    if(k<=1){
        return 1;
    }
    int start=0;
    int end=0;
    int cnt=0;
    int product=1;
    while(end<n){
        product*=product*arr[end];
        while(product>=k && start<n){
            product=product/arr[start];
            start++;
        }
        end++;
        count+=end-start+1;
    }
    return count;
}

int main(){
    
    return 0;
}