//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int cnt=INT_MAX;
        int sum=0;
        int i=0;
        int j=0;
        
        while(j<n){
            while(sum<=x && j<n){
                sum+=arr[j];
                j++;
            }
            while(sum>x && i<j){
                cnt=min(cnt, j-i);
                sum-=arr[i];
                i++;
                
            }
            
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends