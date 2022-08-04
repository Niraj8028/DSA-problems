//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
public:
    int minSwap(int a[], int n, int k) {
        // Complet the function
         int c=0;int b=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]<=k)
           {
               c++;
           }
       }
       for(int i=0;i<c;i++)
       {
           if(a[i]>k)
           b++;
       }
       int ans=b;
       
       for(int i=0,j=c;j<n;j++,i++)
       {
           if(a[i]>k)
           b--;
           if(a[j]>k)
           b++;
          ans=min(ans,b); 
       }
       return ans;
   }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends