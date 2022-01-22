#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int,int>
vector<int>maxmeetings(int s[],int e[],int n){
    vector<pii>a;
    for(int i=0; i<n; i++){
        a.push_back({e[i],i});
    }
    vector<int>ans;
    ans.push_back(a[0].second+1);
    sort(a.begin(), a.end());
    int limit=a[0].first;
    for(int i=1; i<n; i++){
        if(s[a[i].second]>limit){
            ans.push_back(i+1);
            limit=a[i].first;

        }
    }
    return ans;

}
int main(){
    int start[]={1,3,0,5,8,5};
    int end[]={2,4,6,7,9,9};
    int n=5;
    vector<int>arr=maxmeetings(start,end,n);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}