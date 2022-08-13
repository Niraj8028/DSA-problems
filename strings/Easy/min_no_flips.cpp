//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int count1=0;
    int count2=0;
     for(int i=0;i<S.length();i++){
       if((i%2==0 && S[i]=='1') || (i%2!=0 && S[i]=='0')) count1++;
       if((i%2==0 && S[i]=='0') || (i%2!=0 && S[i]=='1')) count2++;
   }
   return min(count1,count2);
}