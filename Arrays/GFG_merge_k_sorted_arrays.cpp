//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++
    
class Solution
{
    public:
    //Function to merge k sorted arrays.
    #define pii pair<int,pair<int,int>>
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        for(int i=0; i<K; i++){
            pq.push(make_pair(arr[i][0],make_pair(i,0)));
          //code here
        }
        vector<int>ans;
        while(!pq.empty()){
            pii x=pq.top();
            pq.pop();
            ans.push_back(x.first);
            int col=x.second.second;
            int row=x.second.first;
            if(col<K-1){
                pq.push(make_pair(arr[row][col+1],make_pair(row,col+1)));
            }
            
        }
        return ans;
    
    }
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends