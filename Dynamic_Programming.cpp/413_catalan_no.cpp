#include "bits/stdc++.h"
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        cpp_int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++){
            
            for(int j=0; j<i; j++){
                dp[i]+=dp[j]*dp[i-j-1];
            }
            
        }
        return dp[n];
    }
};

// { Driver Code Starts.

int main() 
{
    //taking count of testcases
	int t;
	cin>>t;
	while(t--) {
	    
	    //taking nth number
	    int n;
	    cin>>n;
	    Solution obj;
	    //calling function findCatalan function
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}  // } Driver Code Ends