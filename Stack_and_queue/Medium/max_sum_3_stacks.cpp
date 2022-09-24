//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int sum1=0;
        int sum2=0;
        int sum3=0;
        
        for(int i=0; i<n1; i++){
            sum1=sum1+s1[i];
        }
        for(int i=0; i<n2; i++){
            sum2=sum2+s2[i];
        }
        for(int i=0; i<n3; i++){
            sum3=sum3+s3[i];
        }
        int p1=0;
        int p2=0;
        int p3=0;
        
        int ans=0;
        while(true){
            if(p1==n1 || p2==n2|| p3==n3){
                ans=0;
                break;
            }
            else if(sum1==sum2 && sum2==sum3){
                ans=sum1;
                break;
            }
            else if(sum1>=sum2 && sum1>=sum3){
                sum1=sum1-s1[p1];
                p1++;
            }
            else if(sum2>=sum1 && sum2>=sum3){
                sum2=sum2-s2[p2];
                p2++;
            }
            
            else if(sum3>=sum1 && sum3>=sum2){
                sum3=sum3-s3[p3];
                p3++;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends