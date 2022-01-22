#include <iostream>
using namespace std;
struct job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
bool compare(job a,job b){
    return a.profit>b.profit;
}
int maxprofit(job arr[],int n){
    sort(arr,arr+n; compare);
    int jobs=0;
    int profit=0;
    bool done[n]={0}; 
    for(int i=0; i<n; i++){
        for(int j=marr[i].dead-1; j>=0; j--){
            if(done[j]==false){
                profit+=arr[i].profit;
                jobs++;
                done[j]=true;

            }

        }
        return profit;
    }

}
int main(){
    N = 5
    Jobs = {(1,2,100),(2,1,19),(3,2,27),
        (4,1,25),(5,1,15)}
    cout<<maxprofit(Jobs,N);
    
    return 0;
}