//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
        // code here
        stack<char>st;
        stack<int>ind;
        
        ind.push(-1);
        int ans=0;
        int n=s.length();
        
        for(int i=0; i<n; i++){
            if(s[i]==')'){
                if(st.empty()){
                    ind.push(i);
                }
                else if(st.top()=='('){
                    st.pop();
                    ind.pop();
                    ans=max(ans,i-ind.top());
                }
                else{
                    ind.push(i);
                }
            }
            else{
                st.push(s[i]);
                ind.push(i);
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
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends