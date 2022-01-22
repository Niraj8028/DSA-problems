#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

int meetings(int start[],int endt[],int n){
    vector<pair<int,int> >a(n);
    for(int i=0; i<n; i++){
        a[i]={start[i],end[i]};
    }
    sort(a.begin(),a.end(),compare);
    int ans=1;
    int i=0; int j=1;
    while(j<n){
        if(a[j].first > a[i].second){
            ans++;
            i=j;
            j++;
        }
        else{
            j++;
        }
    }
    return ans;
        
    
}
int main(){
    int start[]={1,3,0,5,8,5};
    int endt[]={2,4,6,7,9,9};
    int n=6;
    cout<<meetings(start,endt,n);
    
    return 0;
}