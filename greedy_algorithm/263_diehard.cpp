#include <iostream>
using namespace std;


int main(){
    int time=0;
        int h,a;
        cin>>h>>a;
    while(true){
        
        if(time%2==0){
            h=h+3;
            a=a+2;
        }
        else{
            if(a>10){
                a=a-10;
                h=h-5;
            }
            else{
                h=h-20;
                a=a+5;

            }
        }
        if(a>0 && h>0){
            time++;
        }
        else{
            break;
        }
    }
    cout<<time;
    return 0;
}