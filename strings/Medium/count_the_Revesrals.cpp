//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



int countRev (string s)
{
    // your code here
    stack<char>st;
    int c1=0;
    int c2=0;
    if(s.length()%2!=0){
        return -1;
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]=='{'){
            st.push(s[i]);
            c1++;
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
                c1--;
            }
            else{
                st.push(s[i]);
                c2++;
            }
        }
    }
    if(c1%2==0){
        c1=c1/2;
    }
    else{
        c1=(c1/2)+1;
    }
    if(c2%2==0){
        c2=c2/2;
    }
    else{
        c2=(c2/2)+1;
    }
    return c1+c2;
}