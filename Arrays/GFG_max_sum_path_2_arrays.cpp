//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int m, int n)
    {
    
        //Your code here
        
        int i=0; int j=0;
        int sum1=0;
        int sum2=0;
        int result=0;
        while(i<m && j<n){
            if(A[i]>B[j]){
                sum2+=B[j++];
            }
            else if(A[i]<B[j]){
                sum1+=A[i++];
            }
            else if(A[i]==B[j]){
                result+=max(sum1,sum2)+A[i];
                
                sum1=0;
                sum2=0;
                
                i++;
                j++;
            }
        }
        while(i<m)
       {
           sum1+=A[i];
           i++;
       }
       while(j<n)
       {
           sum2+=B[j];
           j++;
       }
       result+=max(sum1,sum2);
        return result;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends