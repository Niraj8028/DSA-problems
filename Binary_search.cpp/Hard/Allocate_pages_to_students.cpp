//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPos(int arr[],int limit,int students,int n){
        
        int count=1;
        int pages=0;
        for(int i=0; i<n; i++){
            
            pages+=arr[i];
            if(pages>limit){
                count++;
                pages=arr[i];
            }
        }
        if(count>students){
            
            return false;
        }
        return true;
    }
    
    
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int low=0;
        int sum=0;
        for(int i=0; i<n; i++){
            low=max(low,arr[i]);
            sum+=arr[i];
        }
        int high=sum;
        
        int ans=-1;
        
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(isPos(arr,mid,m,n)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends