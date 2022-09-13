//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    
	    vector<vector<int>>vis(n,vector<int>(m,0));
	    vector<vector<int>>dist(n,vector<int>(m,0));
	    queue<pair<pair<int,int>,int>>q;
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(grid[i][j]==1){
	                vis[i][j]=1;
	                q.push({{i,j},0});
	            }
	        }
	                
	    }
	    while(!q.empty()){
	        auto temp=q.front();
	        q.pop();
	        int x=temp.first.first;
	        int y=temp.first.second;
	        int data=temp.second;
	        dist[x][y]=data;
	        
	        int dx[4]={1,0,-1,0};
	        int dy[4]={0,-1,0,1};
	        
	        for(int i=0; i<4; i++){
	            int nx=x+dx[i];
	            int ny=y+dy[i];
	            if(nx<0 || nx>=n || ny<0 || ny>=m || grid[nx][ny]==1 || vis[nx][ny]==1){
	                continue;
	            }
	            q.push({{nx,ny},data+1});
	            vis[nx][ny]=1;
	        }
	        
	    }
	    return dist;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends