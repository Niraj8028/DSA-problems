#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int, int>>
int helper(int h,int m,int count,bool flag){
            if(h<=0 || m<=0){
                count--;
                return count;
            }
            else{
                
                if(flag){
                    count=helper(h+3,m+2,count+1,false);
                }
                else{
                    count++;
                    flag=true;
                    if(h>5 && m>10){
                        count=helper(h-5,m-10,count,true);
                    }
                    else if(h>20){
                        count=helper(h-20,m+5,count,true);
                    }
                    
                    else{
                        count--;
                        return count;
                    }
                    
                }
            }
        }

int maxLevel(int h, int m)
{
    

    return helper(h, m, 0,true);
}
int main()
{   
    int h=20;
    int m=8;
    cout<<maxLevel(h,m);


    return 0;
}