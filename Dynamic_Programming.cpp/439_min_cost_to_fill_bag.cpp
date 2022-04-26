// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	
	int minimumCost(int arr[], int n, int w) 
	{ 
        int dp[n+1][w+1];
        for(int i=0;i<=w;i++){
            dp[0][i]=1e9;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=w; j++){
                if(i<=j){
                    if(arr[i-1]!=-1){
                        dp[i][j]=min(arr[i-1]+dp[i][j-i],dp[i-1][j]);
                    }
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][w];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends