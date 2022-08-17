//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
       // code here
       string res="";
       int i=0;
       while(i<s.length()){
           char ch=s[i];
           int freq=0;
           while(ch==s[i]){
               freq++;
               i++;
           }
           if(freq==1){
               res+=ch;
           }
       }
       if(res==s){
           return res;
       }
       return rremove(res);
   }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends