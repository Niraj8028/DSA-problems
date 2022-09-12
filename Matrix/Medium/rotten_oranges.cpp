//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int m=grid.size();
        int n=grid[0].size();
        
        int oranges=0;
        
        
        queue<pair<int,int>>bfs;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    
                    oranges++;
                }
                else if(grid[i][j]==2){
                    oranges++;
                    bfs.push({i,j});
                }
            }
        }
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,1,-1};
        int days=0;
        int count=0;
        while(!bfs.empty()){
            int temp=bfs.size();
            count=count+temp;
            while(temp--){
                int x=bfs.front().first;
                int y=bfs.front().second;
                bfs.pop();
                
                for(int i=0; i<4; i++){
                    x+=dx[i];
                    y+=dy[i];
                    if(x<0 || y<0 || x>=m || y>=n || grid[x][y]!=1){
                        continue;
                    }
                    grid[x][y]=2;
                    bfs.push({x,y});
                }
            }
            if(!bfs.empty()){
                days++;
            }
        }
        if(count==oranges){
            return days;
        }
        return -1;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends