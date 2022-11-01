//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string lexicographicallySmallest(string S, int k) {
        // code here
        int n=S.length();
        bool isPower=false;
        if(n==1){
            return "-1";
        }
        int num=2;
        while(num<n){
            num=num*2;
        }
        if(num==n){
            isPower=true;
        }
        if(isPower){
            k=k/2;
        }
        else{
            k=k*2;
        }
        stack<char>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && k>0 && st.top()>S[i]){
                st.pop();
                k--;
            }
            st.push(S[i]);
        }
        while(k){
            st.pop();
            k--;
        }
        string ans;
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            ans=ans+ch;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int k;
        cin >> S >> k;
        Solution ob;
        cout << ob.lexicographicallySmallest(S, k) << endl;
    }
    return 0;
}

// } Driver Code Ends