//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    struct node
{
    int start,end,ind;
};
static bool cmp(node a,node b)
{
    if(a.end==b.end)
    return a.ind<b.ind;
    return a.end<b.end;
}
    vector<int> maxMeetings(int n,vector<int> &s,vector<int> &e)
    {
        vector<node> v;
        vector<int>ans;
        node t;
        
        for(int i=0;i<s.size();i++)
        {
            t.start=s[i];
            t.end=e[i];
            t.ind=i+1;
            v.push_back(t);
        }
        
        sort(v.begin(),v.end(),cmp);
        
        ans.push_back(v[0].ind);
        t=v[0];
        for(int i=1;i<s.size();i++)
        {
            if(v[i].start>t.end)
            {
                t=v[i];
                ans.push_back(v[i].ind);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends