//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        // code here
        int n=s.size();
        unordered_map<char,int>mp;
        int cnt=0;
        int ans=0;
        for(int i=0; i<k; i++){
            if(mp[s[i]]==0){
                cnt++;
            }
            mp[s[i]]++;
            
        }
        if(cnt==k-1){
                ans++;
            }
        for(int i=k; i<n; i++){
            if(mp[s[i-k]]==1){
                cnt--;
            }
            mp[s[i-k]]--;
            if(mp[s[i]]==0){
                cnt++;
            }
            mp[s[i]]++;
            if(cnt==k-1){
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends