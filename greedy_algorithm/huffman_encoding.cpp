#include <iostream>
#include <queue>
#include <string>
using namespace std;

class node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool compare(node* a, node*b){
    return a->data>b->data;
}
void preorder(node* root, string s,string &ans){
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->right!=NULL){
        ans.push_back(s);

    }
    preorder(root->left,s+"0",ans);
    preorder(root->right,s+"1",ans);
}
vector<string>huffmanCodes(node* root,vector<int>f,int n){
    priority_queue<node,vector<node>,compare>pq;
    for(int i=0; i<n; i++){
        node* temp=new node(f[i]);
        pq.push(temp);
        
    }
    while(pq.size()!=1){
        node* left=pq.top();
        pq.pop();
        node* right=pq.top();
        pq.pop();
        node* parent=new node(left->data+right->data);
        pq.push(parent);
        parent->left=left;
        parent->right=right;
    }
    node* root=pq.top();
    string ans=;
    preorder(node* root,"",ans);
    return ans;

}
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
    return 0;
}