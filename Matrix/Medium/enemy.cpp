//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int>rows;
            vector<int>cols;
            rows.push_back(0);
            cols.push_back(0);
            
            for(int i=0; i<enemy.size(); i++){
                rows.push_back(enemy[i][0]);
                cols.push_back(enemy[i][1]);
            }
            rows.push_back(n+1);
            cols.push_back(m+1);
            sort(rows.begin(),rows.end());
            sort(cols.begin(),cols.end());
            
            int mr=0;
            int mc=0;
            for(int i=1; i<rows.size(); i++){
                int prev=rows[i-1];
                int curr=rows[i];
                mr=max(mr, curr-prev-1);
            }
            for(int i=1; i<cols.size(); i++){
                int prev=cols[i-1];
                int curr=cols[i];
                mc=max(mr, curr-prev-1);
            }
            return mr*mc;
            
            
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends