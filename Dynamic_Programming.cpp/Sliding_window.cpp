// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

    string smallestWindow (string s, string p)
    {
        unordered_map<char,int>mp;
        for(int i=0; i<p.length(); i++){
            mp[p[i]]++;
        }
        int i=0;
        int j=0;
        int len=INT_MAX;
        
        int start=0;
        int end=0;
        int count=mp.size();
        while(j<s.size()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
            if(count==0){
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

int main()
 {
    string s="zoomlazapzo";
    string p="oza";
    cout<<smallestWindow(s,p);
	return 0;
}  // } Driver Code Ends