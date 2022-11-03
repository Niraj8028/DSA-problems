//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int i,int j, vector<vector<int>>& grid,vector<vector<int>>&vis, vector<pair<int,int>>&temp,int row,int col){
        vis[i][j]=1;
        temp.push_back({i-row,j-col});
        
        int m=grid.size();
        int n=grid[0].size();
        
        int dx[4]={1,0,-1,0};
        int dy[4]={0,1,0,-1};
        
        for(int k=0; k<4; k++){
            
            int nx=i+dx[k];
            int ny=j+dx[k];
            
            if(nx>=0 && nx<m && ny>=0 && ny<n && !vis[nx][ny] && grid[nx][ny]==1){
                dfs(nx,ny,grid,vis,temp,row,col);
            }
        }
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int m=grid.size();
        int n=grid[0].size();
        
        set<vector<pair<int,int>>>st;
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                vector<pair<int,int>>temp;
                
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>>temp;
                    dfs(i,j,grid,vis,temp,i,j);
                    st.insert(temp);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends