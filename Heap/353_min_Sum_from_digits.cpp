#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

// int minsum(int arr[],int n){
//     priority_queue<int, vector<int>,greater<int>>pq;
//     for(int i=0; i<n; i++){
//         pq.push(arr[i]);
//     }
//     int num1=0,num2=0;
//     while(!pq.empty()){
//         num1=num1*10+pq.top();
//         pq.pop();
//         if(num1>num2){
//             num2=num2*10+pq.top();
//             pq.pop();
//         }
//         else{
//             num1=num1*10+pq.top();
//             pq.pop();
//         }
//     }
//     return num1+num2;
// }
string minsum(int arr[],int n){
    sort(arr,arr+n);
    int num1,num2;
    for(int i=0; i<n;i++){
        int num=arr[i];
        if(i%2==0){
            num1=num1+to_string(num);
        }
        else{
            num2=num2+to_string(num);
        }
    }
    string ans;
    
}
int main(){
    int arr[]={5,3,0,7,4};
    int n=5;
    cout<<minsum(arr,n);
    
    return 0;
}