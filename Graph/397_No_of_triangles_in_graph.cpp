#include <iostream>
using namespace std;
int main(){
    int v=4;
    int graph[][v]={{0,1,1,0},
              {1,0,1,1},
              {1,1,0,1},
              {0,1,1,0}};
    int no=0;
    bool directed=false;
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            for(int k=0; k<v; k++){
                if(graph[i][j] && graph[j][k] && graph[i][k]){
                    no++;
                }
            }
        }
    } 
    if(directed){
        cout<<no/3<<" "<<endl;
    }  
    else{
        cout<<no/6<<" "<<endl;
    }     
    return 0;
}