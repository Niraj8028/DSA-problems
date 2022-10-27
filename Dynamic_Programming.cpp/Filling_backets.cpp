//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        int dp[N+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        if(N<=2){
            dp[N]=N;
        }
        for(int i=3; i<=N; i++){
            dp[i]=(dp[i-1]+dp[i-2])%100000000;
        }
        return dp[N];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends