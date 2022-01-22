#include <iostream>
#include <algorithm>
using namespace std;

int mincost(int x[],int y[],int n,int m){
    sort(x,x+n,greater<int>());
    sort(y,y+m,greater<int>());
    int i=0; int j=0;
    int cost=0;
    int vl=1;
    int hr=1;
    while(i<n && j<m){
        

        if(x[i]>=y[j]){
            cost=cost+x[i]*vl;
            hr=hr+1;
            i++;


        }
        else{
            cost=cost+y[j]*hr;
            vl++;
            j++;
        }

    }
    while(i<n){
        cost=cost+(x[i]*vl);
        hr++;
        i++;
    }
    while(j<m){
        cost=cost+(y[j]*hr);
        vl++;
        j++;
    }
    return cost;
    
}
int main(){
    int m=5;
    int n=3;
    int x[]={2,1,3,1,4};
    int y[]={4,1,2};
    cout<<mincost(x,y,m,n);
    
    return 0;
}