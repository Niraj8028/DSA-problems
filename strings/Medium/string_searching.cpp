//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        
             vector <int> search(string pat, string txt)
        {
            //code here.
            vector<int> ans;
            int tn=txt.length();
            int pn=pat.length();
            
            if(tn<pn) return {-1};
            
            for(int i=0;i<=tn-pn;i++)
            {
                if(txt[i]==pat[0] &&     txt.substr(i,pn)==pat)
                 ans.push_back(i+1);
            }
            
            if(ans.size()==0) return {-1};
            return ans;
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