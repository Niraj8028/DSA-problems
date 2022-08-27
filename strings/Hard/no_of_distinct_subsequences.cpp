//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n=s.length();
	    vector<int>dp(n+1);
	    unordered_map<char,int>mp;
	    int mod=1000000007;
	    dp[0]=1;
	    for(int i=1; i<=n; i++){
	        char ch=s[i-1];
	        dp[i]=((dp[i-1])*2)%mod;
	        
	        if(mp.find(ch)!=mp.end()){
	            int j=mp[ch];
	            dp[i]=(dp[i]-dp[j-1]+mod)%mod;
	        }
	        mp[ch]=i;
	    }
	    return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends