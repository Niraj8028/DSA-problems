//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int diff=INT_MAX;
        int i=0; 
        int j=arr.size()-1;
        int first=0;
        int second=0;
        
        while(i<j){
            int sum=arr[i]+arr[j];
            if(abs(x-sum)<diff){
                diff=abs(x-sum);
                first=arr[i];
                second=arr[j];
                
            }
            if(sum>x){
                 j--;
             }else{
                 i++;
             }
        }
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends