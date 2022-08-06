//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int a[26]={0};
 int b[26]={0};
 for(int i=0;i<A.size();i++)
 {
   a[A[i]-'a']=1;
 }
 for(int i=0;i<B.size();i++)
 {
   b[B[i]-'a']=1;
 }
 string s="";
 for(int i=0;i<26;i++)
 {
   if((a[i]==1 && b[i]==0)||(a[i]==0 && b[i]==1))
       s+=char(i+'a');
  }
 if(s.size()==0)
 return "-1";
 return s;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends