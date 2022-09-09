//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=pat.length();
	    int m=txt.length();
	    
	    int count=0;
	    vector<int>mt(26,0);
	    vector<int>mp(26,0);
	    
	    for(int i=0;i<n;++i){
	        mp[pat[i]-'a']++;
	        mt[txt[i]-'a']++;
	        
	    }
	 
	    int left=0;
	    int right=n-1;
	   while(right <m){
	       if(mt==mp) count++;
	       
	       right++;
	       
	       if(right!=m){
	       mt[txt[right]-'a']++;
	       mt[txt[left++]-'a']--;
	       
	       }
	   }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends