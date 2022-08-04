//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>>MergedIntervals;
         
         sort(intervals.begin(), intervals.end());
         vector<int>temp=intervals[0];
         
         for(auto it: intervals){
             if(it[0]<=temp[1]){
                 temp[1]=max(it[1],temp[1]);
             }
             else{
                 MergedIntervals.push_back(temp);
                 temp=it;
             }
             
         }
         MergedIntervals.push_back(temp);
         return MergedIntervals;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends