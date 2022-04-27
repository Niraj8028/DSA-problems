// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string x){
        // code here 
        
        int n=x.length();
        if(n==0 || n==1){
            return x;
        }
        int mx_length=1;
        int str=0;
        int end=0;
        
        if(n%2==0){
            for(int i=0; i<n-1; i++){
            int l=i;
            int r=i+1;
            while(l>=0 && r<=n-1){
                if(x[l]==x[r]){
                    l--;
                    r++;
                    
                }
                else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>mx_length){
                mx_length=len;
                str=l+1;
            }        
            
        }
    }
        else{
           for(int i=0; i<n-1; i++){
            
            int l=i;
            int r=i;
            while(l>=0 && r<=n-1){
                if(x[l]==x[r]){
                    l--;
                    r++;
                    
                }
                else{
                    break;
                }
            }
            int len=r-l-1;
            if(len>mx_length){
                mx_length=len;
                str=l+1;
            } 
        }      
    }
    return x.substr(str,mx_length);
    
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends