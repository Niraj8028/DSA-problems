int wordBreak(string s, vector<string> &B) {
        int n=s.size();
        bool dp[n+1][n+1];
        unordered_set<string>set;
        for(auto it:B){
            set.insert(it);
        }
        
        
        for(int i=1; i<=n; i++){
            int start=1;
            int end=start+i-1;
            while(end<=n){
                string temp=s.substr(start,i);
                if(set.find(temp)!=set.end()){
                    dp[start][end]=1;
                }
                else{
                    bool flag=false;
                    for(int i=start; i<end; i++){
                        if(dp[start][i] && dp[i+1][end]){
                            flag=true;
                            break;
                        }
                        
                    }
                    dp[start][end]=flag;
                }
                start++;
            }
            
        }
        return dp[1][n];
    }