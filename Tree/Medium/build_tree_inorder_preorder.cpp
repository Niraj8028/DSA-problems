//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int index=0;
    unordered_map<int,int>mp;
    Node* solve(int in[],int pre[],int &idx,int start,int end,int size){
        if(index>=size || start>end){
            return NULL;
        }
        int val=pre[idx];
        idx++;
        Node* temp=new Node(val);
        int pos=mp[val];
        temp->left=solve(in,pre,idx,start,pos-1,size);
        temp->right=solve(in,pre,idx,pos+1,end,size);
        return temp;
        
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        for(int i=0; i<n; i++){
            mp[in[i]]=i;
        }
        Node* temp=solve(in,pre,index,0,n-1,n);
        return temp;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends