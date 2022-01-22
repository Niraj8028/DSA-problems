#include <iostream>
#include <algorithm>
using namespace std;

int cost(int x[],int y[],int m,int n){
    sort(x,x+m-1,greater<int>());
    sort(y,y+n-1,greater<int>());
    int hr=1;
    int vl=1;
    int cost=0;
    int i=0; int j=0;

    while(i<m-1 && j<n-1){
        
        if(x[i]>y[j]){
            cost=cost+(x[i]*vl);
            hr++;
            i++;
        }
        else{
            cost=cost+(y[j]*hr);
            vl++;
            j++;
        }
    }
    while(i<m-1){
        cost=cost+(x[i]*vl);
        hr++;
        i++;
    }
    while(j<n-1){
        cost=cost+(y[j]*hr);
        vl++;
        j++;

    }
    return cost;


}
int main(){
    int m=6;
    int n=4;
    int x[]={2,1,3,1,4};
    int y[]={4,1,2};
    cout<<cost(x,y,m,n);
    
    return 0;
}