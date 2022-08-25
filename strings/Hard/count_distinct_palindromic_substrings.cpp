//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    bool isPalindrome(string S){
        int start=0;
        int end=S.size()-1;
        while(start<=end){
            if(S[start]!=S[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    int palindromeSubStrs(string s) {
        // code here
        unordered_set<string>st;
        int n=s.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(s[i]!=s[j]){
                    continue;
                }
                string temp=s.substr(i,j-i+1);
                if(st.find(temp)!=st.end()){
                    continue;
                }
                if(isPalindrome(temp)){
                    st.insert(temp);
                }
            }
        }
        return st.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends