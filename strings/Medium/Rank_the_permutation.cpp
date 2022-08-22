//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    long long findRank(string str) {
        //code here
         unordered_map<int,int>mp;
         int n=str.size();
         for(int i=0; i<str.size(); i++){
             mp[str[i]-'a']++;
         }
         vector<long long>fact(n);
         fact[0]=1;
         fact[1]=1;
         
         for(int i=2; i<n; i++){
             fact[i]=fact[i-1]*i;
         }
         long long ans=1;
         for(int i=0; i<n; i++){
             int cnt=0;
             for(int j=0; j<str[i]-'a'; j++){
                 cnt+=mp[j];
             }
             mp[str[i]-'a']--;
             ans+=(cnt*fact[n-i-1]);
             
         }
         return ans;
         
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends