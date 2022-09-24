//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<int> nextSmaller(long long arr[], int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        for(int i = n-1; i>=0; i--){
            int curr = arr[i];
            
            while(s.top()!=-1 && arr[s.top()] >= curr){
                s.pop();
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmaller(long long arr[], int n){
        stack<int> s;
        s.push(-1);
        
        vector<int> ans(n);
        
        for(int i = 0; i<n; i++){
            int curr = arr[i];
            
            while(s.top()!=-1 && arr[s.top()] >= curr){
                s.pop();
            }
            
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int>left=prevSmaller(arr,n);
        vector<int>right=nextSmaller(arr,n);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,arr[i]*(right[i]-left[i]-1));
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends