//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
        queue<int>q;
        int ans=0;
        for(int i=1; i<10; i++){
            q.push(i);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(x>X){
                continue;
            }
            ans=max(ans,x);
            int last=x%10;
            if(last!=0){
                int first=x*10+(last-1);
                q.push(first);
            }
            if(last!=9){
                int second=x*10+(last+1);
                q.push(second);
            }
            
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends