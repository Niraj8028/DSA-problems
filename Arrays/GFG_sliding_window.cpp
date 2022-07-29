//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector <int> v;
        int maxi=arr[0];
        for(int i=1;i<k;i++){
            maxi=max(maxi,arr[i]);
        }
        v.push_back(maxi);
        for(int i=k;i<n;i++){
            if(maxi != arr[i-k] && arr[i]<maxi)
             v.push_back(maxi);
             else{
                 maxi=arr[i];
                 for(int j=i-k+1;j<i;j++){
                 maxi=max(maxi,arr[j]);
                 }
                  v.push_back(maxi);
                }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends