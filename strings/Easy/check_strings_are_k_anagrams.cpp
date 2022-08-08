//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
         if(str1.length() != str2.length())
           return false;
           
       unordered_map<char,int> m;
       
       for(int i=0;i<str1.length();i++)
           m[str1[i]]++;
       
       int count = 0;
       
       for(int j=0;j<str2.length();j++){
           if(m[str2[j]]>0)
               m[str2[j]]--;
           else
               count++;
       }
       
       return count<=k?true:false;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends