#include <iostream>
#include <queue>
using namespace std;

priority_queue<int ,vector<int>>maxheap;
priority_queue<int ,vector<int> ,greater<int> >minheap;

void insert(int x){
    if(maxheap.size()== minheap.size()){

        if(maxheap.size()==0){
            maxheap.push(x);
            return;
        }
        
        if(maxheap.top()>x){
            maxheap.push(x);

        }
        else{
            minheap.push(x);
        }
        

    }
    else{
        if(maxheap.size() > minheap.size()){
            if(maxheap.top()>=x){
                int temp=maxheap.top();
                maxheap.pop();
                maxheap.push(x);
                minheap.push(temp);
            }
            else{
                minheap.push(x);
            }

        }
        else{
            if(x<=minheap.top()){
                maxheap.push(x);
            }
            else{
                int temp=minheap.top();
                minheap.pop();
                maxheap.push(temp);
                minheap.push(x);
            }
        }
    }
    return;
}
double median(){
    if(maxheap.size()==minheap.size()){
        return (maxheap.top()+minheap.top())/2.0;
    }
    else if(maxheap.size()>minheap.size()){
        return maxheap.top();
        

    }
    else{
        return minheap.top();
    }
}
int main(){
    insert(10);
    cout<<median()<<endl;
    insert(15);
    cout<<median()<<endl;
    insert(21);
    cout<<median()<<endl;
    insert(30);
    cout<<median()<<endl;
    insert(18);
    cout<<median()<<endl;
    insert(19);
    cout<<median()<<endl;
    
    return 0;
}