#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
bool compare(Node*a,Node*b){
    return a->data>b->data;
}
Node* mergeKSortedLL(Node* arr[],int k){
    priority_queue<Node*, vector<Node*> >pq;
    for(int i=0; i<k; i++){
        if(arr[i]!=NULL){
            pq.push(arr[i]);
        }
        Node* dummy=new Node(0);
        Node* curr=dummy;
    }
    while(!pq.empty()){
        Node* temp=pq.top();
        pq.pop();
        curr->next=temp;
        curr=curr->next;
        if(curr->next!=NULL){
            pq.push(curr->next);
        }


    }
    return dummy->next;
}
int main(){
    
    return 0;
}