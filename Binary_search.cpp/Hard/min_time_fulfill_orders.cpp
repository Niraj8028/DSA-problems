//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool isPos(int mid,vector<int>&arr,int k){
        int count=0;
        
        for(int i=0; i<arr.size(); i++){
            int ans=0;
            int temp=arr[i];
            while(ans+temp<=mid){
                count++;
                ans=ans+temp;
                temp=temp+arr[i];
            }
            
        }
        return(count>=k);
    }
        
    
    int findMinTime(int k, vector<int>&arr, int n){
        //write your code here
        int low=arr[0];
        int high=arr[n-1]*(n*(n+1)/2);
        int time=0;
        
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPos(mid,arr,k)){
                time=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return time;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int l;
	    cin >> l;
	    vector<int>arr(l);
	    for(int i = 0; i < l; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    int ans = ob.findMinTime(n, arr, l);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends