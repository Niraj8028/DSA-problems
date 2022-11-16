//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int findBeauty(int arr[]){
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0; i<26; i++){
           if(arr[i]!=0){
               mx=max(mx,arr[i]);
               mn=min(mn,arr[i]);
           } 
        }
        return mx-mn;
    }
  
    int beautySum(string s) {
        // Your code goes here
        int ans=0;
        int n=s.size();
        for(int size=3; size<=s.size(); size++){
            int i=0;
            int j=size;
            int arr[26]={0};
            for(int k=i; k<j; k++){
                arr[s[k]-'a']++;
            }
            ans+=findBeauty(arr);
            
            while(j<n){
                
                arr[s[j]-'a']++;
                arr[s[i]-'a']--;
                i++;
                j++;
                ans=ans+findBeauty(arr);
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends