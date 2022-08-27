//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string s){
        //Write your code here
        int i=0;
        int n=s.size();
        int j=s.size()-1;
        int k=j;
        while(i<j){
            if(s[i]!=s[j]){
                k--;
                i=0;
                j=k;
            }
            else{
                i++;
                j--;
            }
        }
        return(n-k-1);
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends