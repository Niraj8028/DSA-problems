#include <iostream>
#include <set>
#include <unordered_map>
#include <climits>
using namespace std;

int pagefaults(int arr[],int n, int c){
    set<int>s;
    unordered_map<int,int>mp;
    int pgfault=0;
    for(int i=0; i<n; i++){
        if(s.size()<c){
            if(s.find(arr[i])==s.end()){
                pgfault++;
                s.insert(arr[i]);
                
            }
            mp[arr[i]]=i;
            
        }
        else{
            if(s.find(arr[i])==s.end()){
                pgfault++;
                int lru=INT_MAX;
                int value=0;
                for(auto it=s.begin(); it!=s.end(); it++){
                    if(mp[*it]<lru){
                        lru=mp[*it];
                        value=*it;
                    }
                    
                }
                s.erase(value);
                s.insert(arr[i]);
                mp[arr[i]]=i;
            }
            mp[arr[i]]=i;
        }
    }
    return pgfault;
}
int main(){
    int arr[]={5, 0, 1, 3, 2, 4, 1, 0, 5};
    int n=9;
    int c=4;
    cout<<pagefaults(arr,n,c);
    
    return 0;
}