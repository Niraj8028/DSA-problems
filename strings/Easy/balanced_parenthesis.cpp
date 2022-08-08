//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        if(x[0]==')' || x[0]==']' || x[0]=='}'){
            return false;
        }
        int open=0;
        int close=0;
        for(int i=0; i<x.length(); i++){
            if(x[i]==')' || x[i]==']' || x[i]=='}'){
                close++;
            }
            else{
                open++;
            }
        }
        
        if(open!=close){
            return false;
        }
        for(char it : x)
        {
            if(it == '(' or it == '{' or it == '[')
            S.push(it);
            
            else
            {
                if(it == ')')
                {
                    if(S.empty() or S.top() != '(')
                    return false;
                }
                
                if(it == '}')
                {
                    if(S.empty() or S.top() != '{')
                    return false;
                }
                
                if(it == ']')
                {
                    if(S.empty() or S.top() != '[')
                    return false;
                }
                
                S.pop();
            }
        }
        
        return S.empty();
    
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends