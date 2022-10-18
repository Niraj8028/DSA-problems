//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int>ans;
		int m=A.size();
		int x;
		int y;
		int n=A[0].size();
	    for(int i=0; i<n; i++){
	        x=i;
	        y=0;
	        while(x>=0 && y<m){
	            ans.push_back(A[y][x]);
	            x--;
	            y++;
	        }
	    }
	    for(int i=1; i<m; i++){
	        int x=i;
	        int y=n-1;
	        while(x<m && y>=0){
	            ans.push_back(A[x][y]);
	            x++;
	            y--;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends