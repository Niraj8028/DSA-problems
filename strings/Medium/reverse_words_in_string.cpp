public:
    string reverseWords(string s) {
        stack<string>st;
        string temp;
        int count=0;
        for(int i=0; i<s.length(); i++){
            
            if(s[i]==' '){
                if(count>0){
                    st.push(temp);
                    temp="";
                    count=0; 
                }                                     
            }
            else{
                temp=temp+s[i];
                count=count+s[i]-'0';
                
            }
        }
        st.push(temp);
        string ans;
        while(!st.empty()){
            string x=st.top();
            st.pop();
            ans=ans+x;
            if(st.size()>=1){
                ans=ans+" ";
            }
            
        }
        return ans;
    }
};