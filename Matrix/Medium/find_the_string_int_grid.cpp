//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<pair<int,int>>dir={{-1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};
    
    
    
    bool solve(vector<vector<char>>&grid,vector<vector<int>>&ans,string word,int index,int x,int y){
        if(index==word.size()){
            return true;
        }
        for(auto it:dir){
            int dx=x+it.first;
            int dy=y+it.second;
            if(dx>=0 && dx<grid.size() && dy>=0 || dy<grid[0].size() || grid[dx][dy]==word[index]){
                return solve(grid,ans,word,index+1,x,y);
            }
            
        }
        return false;
        
    }
    
    
    
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>>ans;
	    
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            if(grid[i][j]==word[0]){
	                
	               if(solve(grid,ans,word,1,i,j)){
	                        ans.push_back({i,j});
	                }
	               
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}
// } Driver Code Ends