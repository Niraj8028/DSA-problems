//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int n, vector<vector<int>> arr)
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            dp[0][i]=arr[0][i];
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++){
                int up;
                int left;
                int right;
                up=dp[i-1][j];
                if(j-1>=0){
                    left=dp[i-1][j-1];
                }
                else{
                    left=INT_MIN;
                }
                if(j+1<n){
                    right=dp[i-1][j+1];
                }
                else{
                    right=INT_MIN;
                }
                dp[i][j]=arr[i][j]+max(up,max(left,right));
                
            }
        }
        int ans=0;
        for(int i=0; i<n; i++){
            ans=max(ans,dp[n-1][i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends