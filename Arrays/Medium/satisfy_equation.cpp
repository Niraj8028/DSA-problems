//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int arr[], int n) {
        // code here
        map<int,pair<int,int>>mp;
        int ans[4]={INT_MAX,INT_MAX,INT_MAX,INT_MAX};
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int sum=arr[i]+arr[j];
                if(mp.find(sum)==mp.end()){
                    mp[sum]={i,j};
                }
                else{
                    pair<int,int>temp=mp[sum];
                    if((temp.first!=i && temp.second!=j) && (temp.second!=i && temp.first!=j)){
                        int curr[4];
                        curr[0]=temp.first;
                        curr[1]=temp.second;
                        curr[2]=i;
                        curr[3]=j;
                        if(ans[0]==INT_MAX){
                            ans[0]=curr[0];
                            ans[1]=curr[1];
                            ans[2]=curr[2];
                            ans[3]=curr[3];
                        }
                        else{
                            bool replace=false;
                            for(int i=0; i<4; i++){
                                if(ans[i]>curr[i]){
                                    replace=true;
                                    break;
                                }
                                else if(ans[i]<curr[i]){
                                    replace=false;
                                    break;
                                }
                            }
                            if(replace){
                                ans[0]=curr[0];
                                ans[1]=curr[1];
                                ans[2]=curr[2];
                                ans[3]=curr[3];
                            }
                        }
                    }
                }
            }
        }
        vector<int>a;
        if(ans[0]==INT_MAX){
            for(int i=0; i<4; i++){
                a.push_back(-1);
            }
        }
        else{
           for(int i=0; i<4; i++){
                a.push_back(ans[i]);
            }
        } 
        return a;
        }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends