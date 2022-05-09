#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total no of boxes.*/
    class box{
    public:
    int l,w,h;
};
bool compare(box a,box b){
    return a.l*a.w>b.l*b.w;
}
int maxHeight(int length[], int width[],int height[],int n){
    int len=3*n;
    box arr[len];
    for(int i=0; i<n; i++){
        int idx=0;
        arr[idx].h=height[i];
        arr[idx].l=max(width[i],length[i]);
        arr[idx].w=min(width[i],length[i]);
        idx++;
        arr[idx].h=width[i];
        arr[idx].l=max(height[i],length[i]);
        arr[idx].w=min(height[i],length[i]);
        idx++;
        arr[idx].h=length[i];
        arr[idx].l=max(width[i],height[i]);
        arr[idx].w=min(width[i],height[i]);
        idx++;
        
    }
    
    sort(arr,arr+len,compare);
    int lis[len];

    for(int i=0; i<len; i++){
        lis[i]=arr[i].h;
        
    }
    for(int i=1; i<len; i++){
        for(int j=0; j<i; j++){
            if((arr[i].l<arr[j].l) && (arr[i].w<arr[j].w) && (lis[i]<lis[j]+arr[i].h)){
                lis[i]=lis[j]+arr[i].h;
            }
        }
    }
    int mx=0;
    for(int i=0; i<len; i++){
        if(lis[i]>mx){
            mx=max(mx,lis[i]);
        }
        
    }
    return mx;
}
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        
    
        int A[105],B[105],C[105];
        for(int i = 0; i < n; i++)cin >> A[i];
        for(int j = 0; j < n; j++)cin >> B[j];
        for(int k = 0; k < n; k++)cin >> C[k];
        Solution ob;
        cout<<ob.maxHeight(A,B,C,n)<<endl;
    }
	
	return 0;
}
	  // } Driver Code Ends
