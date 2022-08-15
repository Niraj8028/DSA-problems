//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        unordered_map<char,int>mp;
        for(int i=0; i<p.size(); i++){
            mp[p[i]]++;
        }
        int i=0;
        int j=0;
        int start=0;
        int end=0;
        int count=mp.size();
        int len=INT_MAX;
        
        while(j<s.length()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
            
            while(count==0){
                if(j-i+1<len){
                    len=j-i+1;
                    start=i;
                    end=j;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    count++;
                }
                i++;
            }
            
            
            j++;
        }
        string ans="";
        if(len==INT_MAX){
            return "-1";
        }
        for(int i=start; i<=end; i++){
            ans=ans+s[i];
        }
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
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends