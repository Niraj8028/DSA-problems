//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>>x;
        
        for(int i=0; i<n; i++){
            x.push_back({price[i],i+1});
        }
        sort(x.begin(), x.end());
        int count=0;
        for(int i=0; i<n; i++){
            if((x[i].first*x[i].second)<=k){
                count+=x[i].second;
                k-=(x[i].first*x[i].second);
            }
            else{
                int l=(k/x[i].first);
                count+=l;
                k-=x[i].first*l;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends