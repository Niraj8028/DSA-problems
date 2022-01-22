#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>candystore(int candies[],int N,int K){
    sort(candies,candies+N);
    int min=0;
    int max=0;
    int j=N-1;
    int i=0;
    while(i<=j){
        min=min+candies[i];
        i++;
        j=j-K;

    }
    reverse(candies,candies+N);
    int i=0;
    int j=N-1;
    while(i<=j){
        max=max+candies[i];
        i++;
        j=j-K;

    }
    return {min,max};

    


}
int main(){
    
    return 0;
}