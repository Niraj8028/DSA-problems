class Solution {
public:
    string makeGood(string s) {
        if(s.length()==1){
            return s;
        }
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                char x=st.top();
                if(s[i]-32==x || s[i]+32==x){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            
        }
        string ans;
        while(!st.empty()){
            char x=st.top();
            st.pop();
            ans=ans+x;
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};