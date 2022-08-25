//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
  long long int dp[1001][1001];
  
    long long int solve(int N,int K, int vowels){
        if(N==0){
            return 1;
        }
        if(dp[N][vowels]!=-1){
            return dp[N][vowels];
        }
        long long choice1=0;
        long long choice2=0;
        
        if(vowels>0){
            choice1=(5*solve(N-1,K,vowels-1))%1000000007;
            choice2=(21*solve(N-1,K,K)%1000000007);
        }
        else{
            choice1=(21*solve(N-1,K,K))%1000000007;
        }
        return dp[N][vowels]=(choice1+choice2)%1000000007;
        
    }
  
    int kvowelwords(int N, int K) {
        // Write Your Code here
        memset(dp,-1,sizeof(dp));
        
        return solve(N,K,K);
        
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends