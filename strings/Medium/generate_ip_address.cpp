//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    
    
    vector<string> genIp(string &s) {
        // Your code here
        vector<string>ans;
        int x,y,z,w;
        int n=s.length();
        for(int a=1; a<=3; a++){
            for(int b=1; b<=3; b++){
                for(int c=1; c<=3; c++){
                    for(int d=1; d<=3; d++){
                        if(a+b+c+d==n){
                            x=stoi(s.substr(0,a));
                            y=stoi(s.substr(a,b));
                            z=stoi(s.substr(a+b,c));
                            w=stoi(s.substr(a+b+c,d)); 
                        
                            if((x>=0 && x<=255) && (y>=0 && y<=255) && (z>=0 && z<=255) && (w>=0 && w<=255)){
                                string temp="";
                                temp=to_string(x)+"."+to_string(y)+"."+to_string(z)+"."+to_string(w);
                                    if(temp.size()==s.size()+3){
                                    ans.push_back(temp);
                                    }
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends