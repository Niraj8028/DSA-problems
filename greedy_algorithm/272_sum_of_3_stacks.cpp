#include <iostream>
using namespace std;

int sum(int a[],int b[],int c[],int n1,int n2,int n3){
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0; i<n1; i++){
        sum1+=a[i];
    }
    for(int i=0; i<n2; i++){
        sum2+=b[i];
    }
    for(int i=0; i<n3; i++){
        sum3+=a[i];
    }
    int i,j,k;
    i=j=k=0;
    while(true){
        if(i==n1 || j==n2 || k==n3){
            return 0;
            break;
        }
        if(sum1==sum2 && sum2==sum3){
            return sum1;
            break;
        }
        if(sum1>=sum2 && sum1>=sum3){
            sum1=sum1-a[i];
            i++;
        }
        else if(sum2>=sum1 && sum2>=sum3){
            sum2=sum2-b[j];
            j++;
        }
        else if(sum3>=sum1 && sum3>=sum2){
            sum3=sum3-c[k];
            k++;
        }
    }
    return 0;


}
int main(){
    int a[]={3,2,1,1,1};
    int b[]={4,3,2};
    int c[]={1,1,4,1};
    int n1=5;
    int n2=3;
    int n3=4;
    cout<<sum(a,b,c,n1,n2,n3);
    return 0;
}