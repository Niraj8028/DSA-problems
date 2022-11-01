//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>>ans;
        unordered_map<string,set<string>>mp;
        for(int i=0; i<n; i++){
            string str;
            for(int j=0; j<contact[i].length(); j++){
                str.push_back(contact[i][j]);
                mp[str].insert(contact[i]);
            }
        }
        string st="";
        for(int i=0; i<s.length(); i++){
            st.push_back(s[i]);
            if(mp.find(st)==mp.end()){
                ans.push_back({"0"});
            }
            else{
                vector<string>temp;
                for(auto it: mp[st]){
                    temp.push_back(it);
                }
                ans.push_back(temp);
                
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
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends