class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        int n=s.size();
        if(n==1){
            return s;
        }
        string temp=s+s;
       
        string ans=s;
        
        for(int i=0; i<=n; i++){
            string x=temp.substr(i,n);
            
            ans=min(ans,x);
        }
        return ans;
    }
};