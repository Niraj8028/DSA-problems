//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int sum=0;
        int swaps=0;
        vector<int>close;
        for(int i=0; i<S.length(); i++){
            if(S[i]=='['){
                close.push_back(i);
            }
        }
        int idx=0;
        
        for(int i=0; i<S.length(); i++){
            if(S[i]=='['){
                sum++;
                idx++;
            }
            else{
                sum--;
            
                if(sum==-1){
                swaps+=close[idx]-i;
                swap(S[i],S[close[idx]]);
                sum=1;
                idx++;
                }
            }
        }
        return swaps;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends