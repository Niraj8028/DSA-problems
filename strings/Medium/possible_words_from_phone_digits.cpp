//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int a[],int index,int N, string output,vector<string>&ans,vector<string>&keypad){
        if(index==N){
            ans.push_back(output);
            return;
        }
        int num=a[index];
        string temp=keypad[num];
        
        for(int i=0; i<temp.size(); i++){
            output.push_back(temp[i]);
            solve(a, index+1,N,output,ans,keypad);
            output.pop_back();
        }
    }
    
    
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";
        vector<string>ans;
        solve(a,0,N,output,ans,keypad);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends