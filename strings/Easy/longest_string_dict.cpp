//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    static bool comp(string a, string b){
        if(a.length()==b.length()){
            return a<b;
        }
        return a.length()>b.length();
    }
  
    bool isSubsequence(string &S, string str){
        if(str.length()>S.length()){
            return false;
        }
        int i=0; int j=0;
        while(i<S.size() && j<str.size()){
            if(S[i]==str[j]){
                j++;
            }
            i++;
        }
        if(j==str.size()){
            return true;
        }
        return false;
    }
  
    string findLongestWord(string S, vector<string> d) {
        // code here
        int length=0;
        string temp="";
        vector<string>ans;
        for(int i=0; i<d.size(); i++){
            if(isSubsequence(S,d[i])){
                if(d[i].length()>=temp.length()){
                    ans.push_back(d[i]);
                }
            }
            
        }
        sort(ans.begin(), ans.end(), comp);
        return ans[0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> d(n + 1);
        for (int i = 0; i < n; i++) cin >> d[i];
        string S;
        cin >> S;
        Solution ob;
        cout << ob.findLongestWord(S, d) << endl;
    }
    return 0;
}

// } Driver Code Ends