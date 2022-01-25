#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class node{
    int data;
    node*left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool compare(node*a, node*b){
    return a->data>b->data;
}
void preorder(node*root,string s,vector<string>&ans){
    if(root==NULL){
        return;
    }
    if(!root->left && !root->right){
        ans.push_back(s);
    }
    preorder(root->left,s+"0",ans);
    preorder(root->right,s+"1",ans);


}
vector<string>HuffmanEncoding(node*root,vector<int>arr,int n){
    priority_queue<node* ,vector<node*>,compare>pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    while(pq.size!=1){
        node*l=pq.top();
        pq.pop();
        node* r=pq.top();
        pq.pop();
        node* p=new node(l->data+r->data);
        p->left=l;
        p->right=r;
        pq.push(p);
    }
    node* root=pq.top();
    pq.pop();
    vector<string> ans="";
    preorder(root,"",ans);
    return ans;
}
int main(){
    
    
    return 0;
}