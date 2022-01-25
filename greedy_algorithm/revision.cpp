#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define pii pair<double,int>

bool compare(pii a,pii b){
    return a.first>b.first;
}

double val(int v[],int w[],int n,int wt=50){
    vector<pii>val;
    for(int i=0; i<n; i++){
        double x=((v[i]*1.0)/(w[i]*1.0));
        val.push_back({x,w[i]});
    }
    sort(val.begin(),val.end(),compare);
    double value=0;
    
    for(int i=0; i<n; i++){
        if(wt>=val[i].second){
            value+=val[i].first*val[i].second;
            wt=wt-val[i].second;
        }
        else{
            value+=wt*val[i].first;
            break;
        }
    } 
    return value;
}
int main(){
    int values[] = {60,100,120};
    int weight[] = {10,20,30};
    int n=3;
    int wt=50;
    cout<<val(values,weight,n,wt);

    return 0;
}