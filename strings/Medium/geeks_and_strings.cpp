//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> prefixCount(int n, int q, string li[], string query[])
    {
        // code here
        unordered_map<string,set<string>>mp;
        for(int i=0; i<n; i++){
            string str="";
            for(int j=0; j<li[i].size(); j++){
                str.push_back(li[i][j]);
                mp[str].insert(li[i]);
            }
        }
        vector<int>ans;
        for(int i=0; i<q; i++){
            string temp=query[i];
            int count=0;
            if(mp.find(temp)==mp.end()){
                ans.push_back(0);
            }
            else{
                for(auto it: mp[temp]){
                    count++;
                }
                ans.push_back(count);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int Q, N, i = 0, x;
	    cin>>N;
	    string s;
	    string li[N];
	    for(int i = 0;i < N;i++)
	        cin>>li[i];
	    cin>>Q; 
	    x = Q;
	    string query[Q];
	    while(Q--){
	        cin>>s;
	        query[i++] = s;
	    }
	    
	    Solution ob;
	    vector<int> ans = ob.prefixCount(N, x, li, query);
	    for(auto i: ans) 
	        cout<<i<<"\n";
    }
    return 0;
}
// } Driver Code Ends