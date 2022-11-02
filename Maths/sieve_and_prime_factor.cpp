//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    void sieves(vector<int>&sieve,int r){
        sieve[1]=1;
        for(int i=2; i<=r; i++){
            if(sieve[i]==0){
                for(int j=i; j<=r; j=j+i){
                    sieve[j]=sieve[j]+i;
                }
            }
        }
    }
    
  
    int sumOfAll(int l, int r){
        // code here
        vector<int>sieve(r+1,0);
        sieves(sieve,r);
        int ans=0;
        if(l==1){
            ans=ans-1;
        }
        for(int i=l; i<=r; i++){
            ans=ans+sieve[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}

// } Driver Code Ends