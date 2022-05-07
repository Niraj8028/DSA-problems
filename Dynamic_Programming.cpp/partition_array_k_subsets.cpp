
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    bool helper(int a[],int k,int sum,int curr,vector<bool>&vis,int n,int ind){
        if(k == 1)
            return true;
        if(curr > sum)
            return false;
        if( curr==sum){
            return helper(a,k-1,sum,0,vis,n,0);
        }
        for(int i  = ind;i < n ; i ++){
            if(vis[i] == false){
                vis[i] = true;
                if(helper(a,k,sum,curr+a[i],vis,n,i+1))
                    return true;
                else  vis[i] = false;
            }
        }
        return false;
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        if(sum%k!=0){
            return false;
        }
        vector<bool>vis(n+1,false);
        return helper(a,k,sum/k,0,vis,n,0);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends