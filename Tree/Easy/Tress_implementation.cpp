#include "bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

struct Node{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int val){
        data=val;
        left=right=NULL;
    }
}

int main(){
    Node* root= new Node(5);
    root->left=new node(1);
    root->right=new node(2);
    root->left->right=new node(3);
    
    return 0;
}