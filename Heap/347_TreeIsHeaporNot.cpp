#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
int count(node* root){
    if(root ==NULL){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}
bool isheap(node* root,int n,int i){
    if(root==NULL){
        return true;
    }   
    if((root-> left && root->data<root->left->data) || (root->right && root->data<root->left->data)){
        return false;
    }
    // if(root->left==NULL && root->right!=NULL){
    //     return false;
    
    if(i>=n){
        return false;
    }
    bool left=isheap(root->left,n,2*i+1);
    bool right=isheap(root->right,n,2*i+2);
    return left && right;
}
bool maxheap(node*root){
    if(root==NULL){
        return true; 
    }
    int i=0;
    int n=count(root);
    if(isheap(root,n,i)){
        return true;

    }
    return false;
}

int main(){
    node* root=new node(30);
    root->left=new node(20);
    root->right=new node(10);
    root->left->left=new node(15);
    root->left->right=new node(6);
    
    cout<<maxheap(root);

    
    return 0;
}