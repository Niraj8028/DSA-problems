#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    int n=5;
    string s="";
    int arr[3][3]={{1,0},{3,3},{2,2}};
    for(int i=1; i<=n; i++){
        char x = '0' +i;
        s=s+x;
    }
    
    int ans=0;
    // cout<<s.find('3');
    for(int i=0; i<3; i++){

        if(arr[i][0]==1){
            s.erase(0,1);
        }
        else if(arr[i][0]==2){
            int temp=s.find(arr[i][1]+'0');
            s.erase(temp,1);
        }
        else if(arr[i][0]==3){
            int temp=s.find(arr[i][1]+'0');
            ans+=temp;
        }
    }
    cout<<ans+1;

    return 0;
}