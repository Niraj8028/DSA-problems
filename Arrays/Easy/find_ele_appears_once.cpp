//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n) {
        int l = 0, r = n-1;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            bool isEven = (r-mid)%2 == 0;
            
            if(arr[mid] == arr[mid+1]) {
                if(isEven) {
                    l = mid+2;
                } else {
                    r = mid-1;
                }
            } else if(arr[mid] == arr[mid-1]) {
                if(isEven) {
                    r = mid-2;
                } else {
                    l = mid+1;
                }
            } else {
                return arr[mid];
            }
        }
        
        return arr[r];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends