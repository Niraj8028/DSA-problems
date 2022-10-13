//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void findParent(Node* root, unordered_map<Node*,Node*> &parent, int target,Node* &tgt)
    {
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node*curr = q.front();
            q.pop();
            if(curr->data == target)
                tgt = curr;
            if(curr->left != NULL)
            {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
  
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        Node* tgt=NULL;
        unordered_map<Node*,Node*>parent;
        findParent(root,parent,target,tgt);
        
        unordered_map<Node*,bool>vis;
        queue<Node*>q;
        
        q.push(tgt);
        vis[tgt]=true;
        int level=0;
        while(!q.empty()){
            int size=q.size();
            bool flag=false;
            
            for(int i=0; i<size; i++){
                Node* temp=q.front();
                q.pop();
                
            
                if(temp->left && !vis[temp->left]){
                    q.push(temp->left);
                    vis[temp->left]=true;
                    flag=true;
                
                }
                if(temp->right && !vis[temp->right]){
                    q.push(temp->right);
                    vis[temp->right]=true;
                    flag=true;
                
                }
                if(parent[temp] && !vis[parent[temp]]){
                    q.push(parent[temp]);
                    vis[parent[temp]]=true;
                    flag=true;
                }
            }
            if(flag){
                level++;
            }
            
        }
        return level;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends