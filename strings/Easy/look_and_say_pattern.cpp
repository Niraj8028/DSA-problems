//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string dp[n+1];
        memset(dp,"", sizeof(dp));
        
        dp[1]="1";
        dp[2]="11";
        
        
        if(dp[n]!=""){
            return dp[n];
        }
        
        for(int i=3; i<=n; i++){
            string s=dp[i-1];
            s=s+"&";
            string x="";
            int count=1;
            
            for(int j=1; j<s.size(); j++){
                if(s[j]!=s[j-1]){
                    x+=to_string(count);
                    x+=s[j-1];
                    count=1;
                }
                else{
                    count++;
                }
            }
            dp[i]=x;
        }
        return dp[n];
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends