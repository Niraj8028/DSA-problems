//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(int &ans,int n, int m, int val){
        if(val>m){
            return;
        }
        if(val>=n && val<=m){
            ans++;
        }
        int temp=val%10;
        if(temp!=0){
            solve(ans,n,m, val*10+(temp-1));
        }
        if(temp!=9){
            solve(ans,n,m, val*10+(temp+1));
        }
        return;
    }
    
    
    int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans=0;
        for(int i=1; i<=9; i++){
            solve(ans,n,m,i);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends