//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       if(s1=="0" || s2=="0") return "0";
       bool flag=true;
       if(s1[0]=='-' && s2[0]!='-'){
           s1.erase(0,1);
           flag=false;
       }
       else if(s1[0]!='-' && s2[0]=='-'){
           s2.erase(0,1);
           flag=false;
       }
       else if(s1[0]=='-' && s2[0]=='-'){
           s1.erase(0,1);
           s2.erase(0,1);
       }
       
       string s3;
       int n1=s1.length();
       int n2=s2.length();
       vector<int> ans(n1+n2,0);
      
       
       for(int i=n1-1;i>=0;i--){
           for(int j=n2-1;j>=0;j--){
               ans[i+j+1]+=(s1[i]-'0') * (s2[j]-'0');
               int carry=ans[i+j+1];
               ans[i+j]+=carry/10;
               ans[i+j+1]=carry%10;
           }
       }
       int i=0;
       while(ans[i]==0){
           i++;
       }
       if(flag==false){
           s3+='-';
       }
       while(i<ans.size())s3+=to_string(ans[i++]);
       return s3;
    }
};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends