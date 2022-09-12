//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool find(vector<vector<int>>& grid,vector<vector<bool>>&vis,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j]==true || grid[i][j]==0){
            return false;
        }
        if(grid[i][j]==2){
            return true;
        }
        vis[i][j]=true;
        
        bool up=find(grid,vis,i-1,j);
        bool down=find(grid,vis,i+1,j);
        bool left=find(grid,vis,i,j-1);
        bool right=find(grid,vis,i,j+1);
        
        return (up || down || left|| right);
        
    }
    
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    return find(grid,vis,i,j);
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends