#include <iostream>
#include <vector>
using namespace std;
class Node{
    int val;
    vector<Node*>neighbours;
    node(int data){
        val=data;
    }
};
void dfs(Node* node,Node* clone, vector<int>&vis){
    vis[clone->val]=clone;
    for(auto it: node->neighbours){
        if(vis[it->val]==NULL){
            Node* temp=new Node(it->val);
            clone->neighbours.push_back(temp->val);
            dfs(it,temp,vis);
        }
        else{
            clone->neighbours.push_back(vis[it->val]);
        }
        
    }

}

Node* cloneOfGraph(Node* node){
    vector<Node*>vis(1000,NULL);
    if(node==NULL){
        return NULL;
    }
    Node* clone=new Node(node->val);
    dfs(node,clone,vis);

    return clone;


}

int main(){
    
    return 0;
}