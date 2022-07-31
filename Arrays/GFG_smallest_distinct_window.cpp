//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        int n=str.size();
        
        int i=0; int j=0;
        unordered_set<char>st;
        
        for(int i=0; i<n; i++){
            st.insert(str[i]);
        }
        
        int k=st.size();
        unordered_map<char,int>mp;
        int count=0;
        int ans=n;
        while(j<n){
           if(mp[str[j]]==0){
               count++;
           } 
           mp[str[j]]++;
           j++;
           
           while(count==k){
               ans=min(ans,j-i);
               if(mp[str[i]]==1){
                   count--;
                   
               }
               mp[str[i]]--;\
               i++;
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends