#include <iostream>
#include <algorithm>
using namespace std;
int minsum(int a[],int b[],int n){
    sort(a,a+n);
    sort(b,b+n);
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=abs(a[i]-b[i]);
    }
    return sum;

}

int main(){
    int a[]={1,2,3};
    int b[]={3,4,2};
    int n=3;
    cout<<minsum(a,b,n);
    return 0;
}