//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    unordered_map<int,int>mp;
    Node*temp=head;
    int cnt=0;
    
    while(temp->next!=NULL){
        
        Node*node=temp->next;
        while(node!=NULL){
            if(mp.find(x-node->data-temp->data)!=mp.end()){
                cnt++;
                node=node->next;
            }
            else{
                mp[node->data]++;
                node=node->next;
                
            }
            
        }
        mp.clear();
        temp=temp->next;
    }
    return cnt;
}  