//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  int wineSelling(vector<int>& a){
      //Code here.
      int n=a.size();
      int buy=0;
      int ans=0;
      int sell=0;
      while(buy<n && sell<n){
          while(a[buy]<=0){
              buy++;
              if(buy==n){
                  return ans;
              }
          }
          while(a[sell]>=0){
              sell++;
              if(sell==n){
                  return ans;
              }
          }
          int x=min(a[buy],abs(a[sell]));
          a[buy]=a[buy]-x;
          a[sell]=a[sell]+x;
          ans+=(x*abs(sell-buy));
      }
      return ans;
  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        int ans = ob.wineSelling(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends