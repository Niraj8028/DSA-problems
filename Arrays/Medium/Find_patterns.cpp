//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string s, string w){
        // code here 
        int n = s.size() ;
        int m = w.size() ;
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            int k = 0 ;
            for(int j = i ; j < n ; j++ ){
                if( s[j] == w[k] ){
                    k++;
                    s[j] = '&' ;
                }
                if( (k == m) ){
                    ans++;
                    break;
                }
            }
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends