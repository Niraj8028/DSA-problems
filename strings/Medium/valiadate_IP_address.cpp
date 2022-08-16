//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int counter=0;
            for(int i=0; i<s.length(); i++){
                if(s[i]=='.'){
                    counter++;
                }
            }
            if(counter!=3){
                return false;
            }
            unordered_set<string>st;
            for(int i=0; i<256; i++){
                st.insert(to_string(i));
            }
            counter=0;
            string temp="";
            for(int i=0; i<s.length(); i++){
                if(s[i]=='.'){
                    if(st.find(temp)!=st.end()){
                        counter++;
                    }
                    temp="";
                }
                else{
                    temp+=s[i];
                }
            }
            if(st.find(temp) != st.end())
               counter++;
            if(counter==4){
                return true;
            }
            return false;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends