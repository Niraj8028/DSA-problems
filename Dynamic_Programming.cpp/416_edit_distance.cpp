// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

    int editDistance(string s, string t) {
       int len1= s.length();
       int len2= t.length();
       int dp[len1+1][len2+1];
       for(int i=0;i<len1+1;i++){
           for(int j=0;j<len2+1;j++){
 
               if(i==0){
                   dp[i][j]= j;                                                                                                                                        
               }
               else if(j==0){
                   dp[i][j]=i;
               }
           }
       }
       for(int i=1;i<len1+1;i++){
           for(int j=1;j<len2+1;j++){        
               if(s[i-1]==t[j-1]){
                   dp[i][j]= dp[i-1][j-1];
               }
               else{
                   dp[i][j]= 1+min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]));
               }
           }
       }
       return dp[len1][len2];
   }

int main() {
    int T;
    cin >> T;   
    return 0;
}
 