

#include <bits/stdc++.h>
using namespace std;

    unordered_map<string,bool>mp;
    bool check(string a,string b,string c,int l,int m,int n, int p1, int p2, int p3){
        if(p3==n){
            if(p1==l && p2==m){
                return true;
            }
            return false;
        }
        string temp=to_string(p1)+"_"+to_string(p2)+"_"+to_string(p3);
        
        if(mp.find(temp)!=mp.end()){
            return mp[temp];
        }
        if(p1==l){
            if(c[p3]==b[p2]){
                return mp[temp]=check(a,b,c,l,m,n,p1,p2+1,p3+1);
            }
            return false;
        }
        if(p2==m){
            if(c[p3]==a[p1]){
                return mp[temp]= check(a,b,c,l,m,n,p1+1,p2,p3+1);
            }
            return false;
        }
        bool x=false;
        bool y=false;
        if(a[p1]==c[p3]){
            x=check(a,b,c,l,m,n,p1+1,p2,p3+1);
        }
        else if(b[p2]==c[p3]){
            y=check(a,b,c,l,m,n,p1,p2+1,p3+1);
        }
        
        return mp[temp]=(x || y);
        
    }
    
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        int l=A.length();
        int m=B.length();
        int n=C.length();
        if(m+l!=n){
            return false;
        }
        bool ans=check(A,B,C,l,m,n,0,0,0);
        return ans;
    }



int main() {
	string a="aabcc";
    string b="dbbca";
    string c="aadbbbaccc";
    cout<<isInterleave(a,b,c);
	
	return 0;
}  