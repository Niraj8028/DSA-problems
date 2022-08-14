//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int search(string text, string pat)
	{
	    // Your code goes here
	    int i=0; int j=0;
	    int n=text.size();
	    int m=pat.size();
	    while(i<n && j<m){
	        if(text[i]==pat[j]){
	            j++;
	            i++;
	        }
	        else{
	            if(j>0){
	                j=0;
	            }
	            else{
	                i++;
	                j=0;
	            }
	        }
	    }
	    if(j==m){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;



        Solution ob;
   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends