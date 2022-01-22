    #include <iostream>
    #include <algorithm>
    using namespace std;

    int smallestSubset(int arr[],int n){
        int sum=0;
        sort(arr,arr+n);
        for(int i=0; i<n; i++){
            sum=sum+arr[i];
        }
        int sum2=0;
        for(int i=0; i<n; i++){
            sum2=sum2+arr[n-1-i];
            sum=sum-sum2;
            if(sum2>sum){
                return i+1;

            }

        }
        return 0;

    }
    int main(){
        int arr[]={2,1,2};
        int n=3;
        cout<<smallestSubset(arr,n);
        
        return 0;
    }