//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    bool isPallindrome(string S,int start,int end)
 {
     while(start<=end)
     {
         if(S[start++]!=S[end--])
         {
             return false;
         }
     }
     return true;
 }
 void func(int index,string S,vector<string>&path,vector<vector<string>>&res)
 {
     if(index==S.size())
     {
         res.push_back(path);
         return ;
     }
     for(int i=index;i<S.size();i++)
     {
         if(isPallindrome(S,index,i))
         {
             path.push_back(S.substr(index,i-index+1));
             func(i+1,S,path,res);
             path.pop_back();
         }
     }
 }
 public:
   vector<vector<string>> allPalindromicPerms(string S) {
       vector<vector<string>>res;
       vector<string>path;
       func(0,S,path,res);
       return res;
   }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends