//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int arr[256]={0};
    	for(int i=0; i<A.length(); i++){
    	    arr[A[i]]++;
    	    arr[B[i]]--;
    	    
    	}
    	for(int i=0; i<256; i++){
    	    if(arr[i]!=0){
    	        return -1;
    	    }
    	}
    	int j=A.length()-1;
    	int i=A.length()-1;
    	int ans=0;
    	while(i>=0){
    	    if(A[i]!=B[j]){
    	        ans++;
    	    }
    	    else{
    	        j--;
    	    }
    	    i--;
    	}
    	return ans;
    	
    }
};

//{ Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}
// } Driver Code Ends