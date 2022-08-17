//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
       //code
       int maxi=INT_MIN, i=0,j=0,n=S.size();
       int arr[26]={0};
       while(j<n){
          arr[S[j]-'a']++;
          while(i<n && arr[S[j]-'a']!=1){
              arr[S[i]-'a']--;
              i++;
          }
          maxi=max(maxi,j-i+1);
          j++;
       }
       return maxi;
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
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends