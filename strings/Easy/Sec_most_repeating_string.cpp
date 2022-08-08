//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>mp;
        int mx=0;
        string s="";
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>mx){
                mx=mp[arr[i]];
                s=arr[i];
            }
        }
        mp.erase(s);
        mx=0;
        string ans="";
        
        for(auto it: mp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends