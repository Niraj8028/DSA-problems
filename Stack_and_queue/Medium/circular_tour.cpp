//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int petrol=0;
       int dist=0;
       vector<int>ans;
       
       for(int i=0; i<n; i++){
           petrol=petrol+p[i].petrol;
           dist=dist+p[i].distance;
           if(p[i].petrol>=p[i].distance){
               ans.push_back(i);
           }
       }
       if(petrol<dist){
           return -1;
       }
       if(ans.size()==0){
           return -1;
       }
       for(int i=0; i<ans.size(); i++){
           int x=ans[i];
           int fuel=0;
           for(int j=x; j<n; j++){
               fuel+=p[j%n].petrol;
               fuel-=p[j%n].distance;
               if(fuel<0){
                   break;
               }
           }
           if(fuel>=0){
               return x;
           }
           
       }
       return -1;
       
       
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends