//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string &S, int idx, int n, vector<string>&ans){
	        if(idx>=n){
	            ans.push_back(S);
	        }
	        for(int i=idx; i<n; i++){
	            if(i>idx && S[i]==S[i-1])continue;
	            swap(S[i],S[idx]);
	            solve(S,idx+1,n,ans);
	            swap(S[i],S[idx]);
	        }
	        
	    }
	    
		vector<string>find_permutation(string S)
		{
		    int n=S.length();
		    vector<string>ans;
		    unordered_set<string>st;
		    solve(S,0,n,ans);
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends