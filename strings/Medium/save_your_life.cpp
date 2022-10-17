//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here   
          string str="";
          string final="";
          unordered_map<char,int>mp;
          for(int i=0; i<n; i++){
              mp[x[i]]=b[i];
          }
          int ans=0;
          int mx=0;
          if(w.size()==1){
              return w;
          }
          for(int i=0; i<w.size(); i++){
              if(mp.find(w[i])!=mp.end()){
                  ans=ans+mp[w[i]];
                  
              }
              else{
                  ans=ans+int(w[i]);
                  
              }
              str=str+w[i];
              if(ans>mx){
                  final=str;
                  mx=ans;
              }
              
              
              if(ans<0){
                  str="";
                  ans=0;
              }
            // cout<<mx<<" ";
          }
          
          return final;
          
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends