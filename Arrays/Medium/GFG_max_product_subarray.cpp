//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    int mx=arr[0];
	    int mn=arr[0];
	    int ans=max(mx,mn);
	    for(int i=1; i<n; i++){
	        if(arr[i]<0){
	            swap(mn,mx);
	        }
	        mx=max(arr[i],arr[i]*mx);
	        mn=min(arr[i],arr[i]*mn);
	        ans=max(ans,mx);
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends