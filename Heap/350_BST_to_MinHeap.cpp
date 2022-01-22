#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(node* root, vector<int> &arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->left,arr);
}

void preorder(node* root,vector<int> &arr,int idx){
    if(root==NULL){
        return;
    }
    root->data=arr[idx++];

    preorder(root->left,arr,idx);
    preorder(root->right,arr,idx);

}
void BSTtoMinHeap(node* root){
    if(root==NULL){
        return;
    }
    int idx=0;
    vector<int>arr;
    inorder(root,arr);
    preorder(root,arr,idx);
}
void convertToMinHeap(node *root)
{
    // vector to store the data of all the
    // nodes of the BST
    vector<int> arr;
    int idx = -1;
 
   
    inorder(root, arr);
 
    // BST to MIN HEAP conversion
    preorder(root,arr,idx);
}
void preorderprint(node* root){
    if(root==NULL){
        return;
    }
    
    preorderprint(root->left);
    cout<<root->data;
    preorderprint(root->right);
    

}

int main(){
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(6);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(7);
    BSTtoMinHeap(root);
    preorderprint(root);
    
    return 0;
}