//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string s, int k){
        int n=s.size();
        string ans="";
        int temp=0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='-'){
                continue;
            }
            
            if(temp==k){
                ans+="-";
                temp=0;
            }
            ans+=toupper(s[i]);
            temp++;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends