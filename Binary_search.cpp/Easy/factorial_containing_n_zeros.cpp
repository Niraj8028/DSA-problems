//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
        bool isPos(int mid,int n){
            int c=0;
            int prod=5;
            while(prod<=mid){
                c+=(mid/prod);
                prod=prod*5;
                
            }
            if(c>=n){
                return true;
            }
            return false;
            
        }
    
        int findNum(int n)
        {
        //complete the function here
            if(n==1){
                return 5;
            }
            int low=0;
            int high=5*n;
            
            while(low<=high){
                int mid=low+(high=low)/2;
                if(isPos(mid,n)){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends