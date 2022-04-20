
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;


    long long countWays(int n, int k)
   {
     long long mod=1e9+7;
     
     if(n==0)
     return 0;
     
     if(n==1)
     return k%mod;
     
     
     long long same=k%mod;
     long long diff= (k*(k-1))%mod;
     
     for(long long  i=3;i<=n;i++)
     {
         long long prev=diff%mod;
        diff=((same+prev)*(k-1))%mod;
          same=prev%mod;
     }
     
     return (same+diff)%mod;
     
   }

int main()
{
	
	int t;
	cin>>t;
	
	return 0;
}  // } Driver Code Ends