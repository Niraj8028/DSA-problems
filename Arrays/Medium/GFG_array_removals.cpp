//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
        //Code here
        int dp[101][101];
    int solve(vector<int>& a, int k, int i, int j){
        if(i<0 || j<0) return 0;
        if(a[j]-a[i]<=k) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int f = solve(a, k, i, j-1) + 1;
        int b = solve(a, k, i+1, j) + 1;
        
        return dp[i][j] = min(f,b);
    }
    int removals(vector<int>& a, int k){
        //Code here
        sort(a.begin(), a.end());
        memset(dp, -1, sizeof(dp));
        
        return solve(a,k,0,a.size()-1);;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.removals(a,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends