//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_set<char>st;
        for(int i=0; i<str.length(); i++){
            st.insert(str[i]);
        }
        int n=st.size();
        int count=0;
        unordered_map<char,int>mp;
        int len=str.length();
        int l=0;
        int r=0;
        while(r<str.length()){
            if(mp[str[r]]==0){
                count++;
            }
            mp[str[r]]++;
            r++;
            while(count==n){
                len=min(len,r-l);
                if(mp[str[l]]==1){
                    count--;
                }
                mp[str[l]]--;
                l++;
            }
            
            
        }
        return len;
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