#include <iostream>
        for(int j=0; j<n; j++){
#include <algorithm>
#include <climits>
using namespace std;

int minEle(int amount[],int n){
    int x=0;
    for(int i=1; i<n; i++){
        if(amount[i]<amount[x]){
            x=i;
        }
        return x;
    }
}
int maxEle(int amount[],int n){
    int x=0;
    for(int i=1; i<n; i++){
        if(amount[i]>amount[x]){
            x=i;
        }
        return x;
    }
}

   
int minOf2(int x,int y){
    int z=min(x,y);
    return z;
}
void minimizeTrans(int amount[],int n){
    
    int maxCre=maxEle(amount,n);
    int maxdeb=minEle(amount,n);

    if(amount[maxCre]==0 && amount[maxdeb]==0){
        return;
    }
    int x=minOf2(amount[maxCre],-(amount[maxdeb]));

    amount[maxCre]-=x;
    amount[maxdeb]+=x;
    cout<<maxdeb<<" has paid "<<x<<" to"<<maxCre<<endl;
    minimizeTrans(amount,n);
}

int main(){
    int n=3;
    int graph[][n]={{0,100,200},{0,0,500},{0,0,0}};
    int amount[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            amount[i]+=(graph[j][i]-graph[i][j]);
        }
    }
    minimizeTrans(amount,n);
    return 0;
}