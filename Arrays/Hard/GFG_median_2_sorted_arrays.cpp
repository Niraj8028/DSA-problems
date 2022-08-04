//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        // Your code goes here
        if(arr2.size() < arr1.size()) 
        return MedianOfArrays(arr2,arr1);
        int n1=arr1.size();
        int n2=arr2.size();
        
        int low=0;
        int high=n1;
        
        while(low<=high){
            int cut1=(low+high)/2;
            int cut2=((n1+n2+1)/2) -cut1;
            int left1,left2,right1,right2;
            
            if(cut1==0){
                left1=INT_MIN;
            }
            else{
                left1=arr1[cut1-1];
            }
            if(cut2==0){
                left2=INT_MIN;
            }
            else{
                left2=arr2[cut2-1];
            }
            if(cut1==n1){
                right1=INT_MAX;
            }
            else{
                right1=arr1[cut1];
            }
            if(cut2==n2){
                right2=INT_MAX;
            }
            else{
                right2=arr2[cut2];
            }
            
            if(left1<=right2 && left2<=right1){
                if((n1+n2)%2==0){
                    return (max(left1,left2)+min(right1,right2))/2.0;
                }
                else{
                    return max(left1,left2);
                }
            }
            else if(left1>right2){
                high=cut1-1;
            }
            else{
                low=cut1+1;
            }
            
        }
        return 0.0;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends