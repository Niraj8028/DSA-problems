//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        int i=0;
        int m=arr[0].size();
        int cnt=0;
        while(i<=m){
            if(arr[0][i]!=arr[N-1][i]){
                break;
            }
            else{
                cnt++;
                i++;
            }
        }
        if(cnt==0){
            return "-1";
        }
        else{
            string ans=arr[0].substr(0,cnt);
            return ans;
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends