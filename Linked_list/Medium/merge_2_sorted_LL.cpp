//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.

Node* solve(Node*first, Node*second){
    
    if(second->next==NULL){
        second->next=first;
        return second;
    }
    
    Node* curr1=first;
    Node* next1=curr1->next;
    
    Node* curr2=second;
    Node* next2=curr2->next;
    
    while(next2!=NULL && curr1!=NULL){
        if(curr1->data>=curr2->data && curr1->data<=next2->data){
            curr2->next=curr1;
            next1=curr1->next;
            curr1->next=next2;
            curr2=curr1;
            curr1=next1;
            
            
        }
        else{
            curr2=curr2->next;
            next2=next2->next;
            
            if(next2==NULL){
                curr2->next=curr1;
                return second;
            }
        }
    }
    
    return second;
}


    Node* sortedMerge(Node* head1, Node* head2)  
    {  
    // code here
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    if(head1->data>=head2->data){
       return solve(head1,head2);
    }
    else{
        return solve(head2,head1);
    }
    
    
}  