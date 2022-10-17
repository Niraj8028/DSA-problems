//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> s,
                     pair<int, int> d) {
        // code here
        queue<pair<int,pair<int,int>>>q;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,INT_MAX));
        vis[s.first][s.second]=0;
        q.push({0,{s.first,s.second}});
        if(s.first==d.first && s.second==d.second){
            return 0;
        }
        
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            int dist=temp.first;
            int x=temp.second.first;
            int y=temp.second.second;
            int dx[4]={1,0,-1,0};
            int dy[4]={0,1,0,-1};
            
            for(int i=0; i<4; i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx==d.first && ny==d.second){
                    return dist+1;
                }
                if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1 && dist+1<vis[nx][ny]){
                    q.push({dist+1,{nx,ny}});
                    vis[nx][ny]=dist+1;
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
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends