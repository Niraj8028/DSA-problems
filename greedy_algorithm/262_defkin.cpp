#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxrect(vector<int>width,vector<int>height,int n,int m){

    width.push_back(0);
    width.push_back(n+1);
    height.push_back(0);
    height.push_back(m+1);
    sort(width.begin(),width.end());
    sort(height.begin(),height.end());
    int mw=INT_MIN;
    int mh=INT_MIN;
    for(int i=0; i<width.size()-1; i++){
        mw=max(mw,width[i+1]-width[i]-1);
    }
    for(int i=0; i<height.size()-1; i++){
        mh=max(mh,height[i+1]-height[i]-1);
    }
    return mh*mw;
    

}
int main(){
    int m,n,k;
    m=15,n=8, k=3;
    vector<int>wid={8,3,11};
    vector<int>height={8,2,6};
    cout<<maxrect(wid,height,m,n);
    
    return 0;
}