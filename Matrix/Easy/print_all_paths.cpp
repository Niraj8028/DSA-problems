//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    void fun(int i , int j , vector<vector<int>> &grid , vector<int> &temp , vector<vector<int>> &ans ,int n, int m){
   
     if(i >= n || j>= m){
       return ;
   }
   if(i == n-1 && j == m -1){
       temp.push_back(grid[i][j]);
       ans.push_back(temp);
       temp.pop_back();
       return ;
   }
   
   temp.push_back(grid[i][j]);
  fun( i + 1 , j , grid , temp ,ans , n  ,m );
  fun( i , j + 1 , grid , temp ,ans , n , m);
  temp.pop_back();
}
   vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
   {
       // code here
       vector<int> temp;
       vector<vector<int>> ans;
       fun(0 , 0 , grid , temp , ans , n , m);
       return ans;
   }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends