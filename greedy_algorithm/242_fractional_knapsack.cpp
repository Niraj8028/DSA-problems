#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<double,int>

double maxVal(int val[],int wt[],int n,int w){
    vector<pii>ans;
    for(int i=0; i<n; i++){
        double x=((val[i]*1.0)/(wt[i]*1.0))
        ans.push_back({x,i});
    }
    sort(ans.begin(), ans.end(), greater<pii>());
    int s=0; 
    double max=0;
    for(int i=0; i<n; i++){
        if(w>wt[ans[i].second]+s){
            max=max+val[ans[i].second];
            s=s+wt[ans[i].second];
        }
        else{
            max=max+(w-s)*ans[i].first;
            break;
        }

    }
    return max;

}

int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int n=3;
    int w=50;
    cout<<maxVal(val,wt,n,w);

    
    return 0;
}