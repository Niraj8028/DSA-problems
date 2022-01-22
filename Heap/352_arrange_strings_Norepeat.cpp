#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

#define pii pair<int,string>

string rearraneStrings(string arr[],int n){
   unordered_map<string,int>mp;
    
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    priority_queue<pii,vector<pii>>pq;
    unordered_map <string,int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        pq.push(make_pair(it->second,it->first));
    } 
    string ans="";
    pii block=pq.top();
    pq.pop();
    ans.append(block.second);
    block.first--;
    while(!pq.empty()){
        pii temp=pq.top();
        pq.pop();
        ans.append(temp.second);
        temp.first--;

        if(block.first>0){
            pq.push(block);
            
        }
        block=temp;
        
    }
    if(block.first>0){
        return "empty";
    }
    return ans;
}

int main(){
    
    string arr[6]={"a","a","b","c","a","a"};
    int n=6;
    string a=rearraneStrings(arr,n);
    
    cout<<a;
    
    

    
    return 0;
}