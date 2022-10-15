class Solution{
    public:
    
    
    long long solve(vector<vector<int>> &stalls,int curPos,int k,int n){
        if(k==0 || n==0){
            return 0;
        }
        
        
            if(abs(stalls[n-1][0]-curPos)<=k){
                return max(stalls[n-1][1]+solve(stalls,stalls[n-1][0],k-abs(stalls[n-1][0]-curPos),n-1),solve(stalls,curPos,k,n-1));
            }
            else if(abs(stalls[n-1][0]-curPos)>k){
                solve(stalls,curPos,k,n-1);
            }
        
        
    }
    
    long long maxFlavoredIceCreams(vector<vector<int>> &stalls,int curPos,int k)
    {
        // code here
        sort(stalls.begin(),stalls.end());
        
        
        int n=stalls.size();
        return solve(stalls,curPos,k,n);
        
    }
};