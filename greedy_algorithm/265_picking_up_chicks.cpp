#include <iostream>
using namespace std;

int NoOfSwaps(int xi[],int vi[],int n,int k,int t,int b){
    int count=0;
    int no=0;
    for(int i=n-1; i>=0; i--){
        int x=b-xi[i];
        int dist=t*vi[i];
        if(dist>=x){
            count++;
        }
        else{
            no++;
        }
        if(count>=k){
            break;
        }
    }
    if(count>=k){
        return no;
    }
    else{
        return -1;
    }
    return -1;
}
int main(){
    int n,t,b,k;
    cin>>n>>k>>t>>b;
    int xi[]={0,2,5,6,7};
    int vi[]={1,1,1,1,4};
    cout<<NoOfSwaps(xi,vi,n,k,t,b);

    return 0;
}