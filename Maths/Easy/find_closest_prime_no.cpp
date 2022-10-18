//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    
	    bool isPrime(int n){
	        if(n<=1){
	            return false;
	        }
	        for(int i=2; i*i<=n; i++){
	            if(n%i==0){
	                return false;
	            }
	        }
	        return  true;
	    }
	
		int NthTerm(int N){
		    // Code here
		    if(N==1){
		        return 1;
		    }
		    int ans=INT_MAX;
		    for(int i=N; i>0; i--){
		        if(isPrime(i)){
		            ans=min(ans,N-i);
		            break;
		        }
		    }
		    for(int i=N; i<=100000; i++){
		        if(isPrime(i)){
		            ans=min(ans,i-N);
		            break;
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends