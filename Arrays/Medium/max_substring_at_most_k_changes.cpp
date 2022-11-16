//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    int same=0;
		    int diff=0;
		    char ch='$';
		    unordered_map<char,int>mp;
		    int i=0; 
		    int j=0;
		    int ans=0;
		    while(i<s.length()){
		        mp[s[i]]++;
		        if(mp[s[i]]>=same){
		            same=mp[s[i]];
		            ch=s[i];
		        }
		        diff=(i-j)+1-same;
		        while(diff>k){
		           mp[s[j]]--;
		           if(s[j]==ch){
		               same--;
		           }
		           else{
		               diff--;
		           }
		           j++;
		           
		        }
		        ans=max(ans,i-j+1);
		        i++;
		    }
		    return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends