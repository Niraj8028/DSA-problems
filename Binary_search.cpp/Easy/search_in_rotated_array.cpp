//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int low, int high, int key){
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<=key && arr[mid]>=key){
                    high=mid-1;
                }
                else{
                  low=mid+1;  
                }
            }
            else{
                if(arr[high]>=key && arr[mid]<=key){
                    low-mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
            
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends