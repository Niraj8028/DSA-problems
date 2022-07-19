#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    

    int PalinArray(int arr[], int n){
       int count=0;
       for(int i=0;i<n;i++){
           int rev_num=0;
           int num=arr[i];
           while(num>0){
               rev_num=rev_num*10 + num%10;
               num = num/10;
           }
           if(rev_num==arr[i]){
               count++;
           }
       }
       if(count==n){
           return 1;
       }
       return 0;
   }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}