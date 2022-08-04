//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        int i=0;
        int left=0;
        int right=0;
        int ans=0;
        unsigned long long prod=1;
        while(right<n && left<=right){
            prod=prod*arr[right];
            while(prod>=k && left<=right){
                prod=prod/arr[left];
                left++;
            }
            ans+=(right-left)+1;
            right++;
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
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends