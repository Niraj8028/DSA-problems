//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int m, int n, vector<vector<int>> arr) {
        // code here
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=m-1;
        
        
        while(top<bottom && left<right){
            int temp=arr[top+1][left];
            for(int i=left; i<=right; i++){
                swap(temp,arr[top][i]);
            }
            top++;
            
            for(int i=top; i<=bottom; i++){
                swap(temp,arr[i][right]);
            }
            right--;
            
            for(int i=right; i>=left; i--){
                swap(temp,arr[bottom][i]);
            }
            bottom--;
            
            for(int i=bottom; i>=top; i--){
                swap(temp,arr[i][left]);
            }
            left++;
        }
        return arr;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends