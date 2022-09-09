//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sortedCount(int n, int m, vector<vector<int>> arr) {
        // code here
        int ans=0;
        for(int i=0; i<n; i++){
            int inc=0;
            int dec=0;
            for(int j=0; j<m-1; j++){
                if(arr[i][j]>arr[i][j+1]){
                    dec++;
                }
                if(arr[i][j]<arr[i][j+1]){
                    inc++;
                }
            }
            if(inc==m-1 || dec==m-1){
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends