//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 

    { 

        int ans=0,sum=0;

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){

            sum+=a[i];

            if(sum==k) 

            ans=i+1;

            if(mp.find(sum-k)!=mp.end())

                ans=max(ans,i-mp[sum-k]);

            if(mp.find(sum)==mp.end())

                mp[sum]=i;

        }

        return ans;

    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends