// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&arr){
		    // Code here
		    int n=arr.size();
		    if(n==0 || n==1){
		        return n;
		    }
		    int ma=1;
		    int mi=1;
		    for(int i=1; i<n; i++){
		        if(arr[i]>arr[i-1]){
		            ma=mi+1;
		        }
		        else if(arr[i]<arr[i-1]){
		            mi=ma+1;
		        }
		    }
		    return max(mi,ma);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.AlternatingaMaxLength(nums);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends