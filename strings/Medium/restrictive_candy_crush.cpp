//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
       
       stack<pair<char,int>> s1;
       
       if(k==1) return "";
       for(int i=0;i<s.length();i++)
       {
           if(s1.empty())
           s1.push({s[i],1});
           else if(s1.top().first==s[i])
           {
               if(s1.top().second==k-1)
               s1.pop();
               else
               int temp=s1.top().second++;
           }
               else
               s1.push({s[i],1});
               
       }
       string s2="";
       while(s1.empty()!=true){
           while(s1.top().second--){
           s2+=s1.top().first;;
           }
           s1.pop();
       }
       reverse(s2.begin(),s2.end());
       return s2;
   }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends