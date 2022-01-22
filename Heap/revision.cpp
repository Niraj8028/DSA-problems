#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

string rearraneString(string s){
    unordered_map<string,int>m[26];
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }
    priority_queue<pair<int,string>,vector<pair<int,string>>>pq;

    unordered_map <string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        pq.push({(it->second),(it->first)});
    }
    string ans="";
    pair<int,string> block=pq.top();
    pq.pop();
    ans.append(block.second);
    block.first--;
    while(!pq.empty()){
        pair<int,string>temp=pq.top();
        pq.pop();
        ans.append(temp.second);
        temp.first--;
        if(block.first>0){
            pq.push(block);
            
        }
        block=temp;
    }
    if(block.first>0){
        return "";
    }
    return ans;

    
        
    
}
int main(){
    
    return 0;
}