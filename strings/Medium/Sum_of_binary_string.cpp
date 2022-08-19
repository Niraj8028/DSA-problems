//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    int m=A.length()-1;
	    int n=B.length()-1;
	    int carry=0;
	    string ans="";
	    while(m>=0 || n>=0 || carry!=0){
	        int sum=0;
	        if(m>=0){
	            sum+=A[m]-'0';
	            m--;
	        }
	        if(n>=0){
	            sum+=B[n]-'0';
	            n--;
	        }
	        sum+=carry;
	        carry=sum/2;
	        ans=to_string(sum%2)+ans;
	    }
	    int i=0;
	    while(ans[i]=='0'){
	        i++;
	    }
	    return ans.substr(i);
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends