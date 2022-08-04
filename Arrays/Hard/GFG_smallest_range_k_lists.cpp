//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    public:
    #define pii pair<int,pair<int,int>>
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          //code here
          
          priority_queue<pii, vector<pii>>pq;
          int mx=INT_MIN;
          int mn=INT_MAX;
          for(int i=0; i<k; i++){
              mx=max(mx,arr[i][0]);
              mn=min(mn,arr[i][0]);
              pq.push({arr[i][0],{i,0}});
          }
          int ff=mn;
          int ss=mx;
          int range=ss-ff;
          while(!pq.empty()){
              auto temp=pq.top();
              pq.pop();
              mn=temp.first;
              if((range)>(mx-mn)){
                  
                  ff=mn;
                  ss=mx;
                  range=ss-ff;
              }
              int i=temp.second.first;
              int j=temp.second.second;
              
              if(j+1<N){
                  pq.push({arr[i][j+1], {i,j+1}});
                  if(arr[i][j+1]>mx){
                      mx=arr[i][j+1];
                  }
              }
              else{
                  break;
              }
              
          }
          return {ff,ss};
          
          
          
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends