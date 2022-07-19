//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    
    
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    
    pair<long long, long long>ans=make_pair(mn,mx);
    return ans;
}