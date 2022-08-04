//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int arr[],int n)
{
//Your code here
    int sum=0;
    int currSum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        currSum+=i*arr[i];
    }
    
    int res=currSum;
    
    for(int i=1; i<n; i++){
        int newSum=currSum-(sum-arr[i-1])+(arr[i-1]*(n-1));
        currSum=newSum;
        res=max(res,currSum);
    }
    return res;
}