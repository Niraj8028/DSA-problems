//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        int m=X.length()-1;
        int n=Y.length()-1;
        string ans="";
        int carry=0;
        int sum=0;
        while(m>=0 && n>=0){
            sum=carry+(X[m]-'0')+(Y[n]-'0');
            carry=sum/10;
            ans=to_string(sum%10)+ans;
            m--;
            n--;
            
        }
        while(m>0){
            sum=(carry+(X[m]-'0'));
            carry=sum/10;
            ans=to_string(sum%10)+ans;
            m--;
        }
        while(n>0){
            sum=(carry+(Y[m]-'0'));
            carry=sum/10;
            ans=to_string(sum%10)+ans;
            n--;
        }
        if(carry){
            ans=to_string(carry)+ans;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends