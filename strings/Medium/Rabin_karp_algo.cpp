//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        
        vector <int> search(string pat, string txt)
        {
           long long t=0,p=0,h=1;
           int n=txt.length(), m=pat.length();
           
           int q=1000000007; 
           int d=256;
           for(int i=1;i<m;i++)
                h=(h*d)%q;
                
           for(int i=0;i<m;i++)
           {
               t=(t*d+txt[i])%q;
               p=(p*d+pat[i])%q;
           }
           
           vector<int> v;
           for(int i=0;i<=n-m;i++)
           {
               if(t==p)
               {
                   if(txt.substr(i,m)==pat)
                   v.push_back(i+1);
               }
               if(i<n-m){
                 t=(d*(t-h*txt[i])+txt[i+m])%q;
                 
               if(t<0)
                 t+=q;
               }
           }
           if(v.size()==0)
           {
               v.push_back(-1);
               return v;
           }
           return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends