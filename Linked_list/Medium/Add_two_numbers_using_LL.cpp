//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *reverse(Node *head)
   {
       Node *p=head;
       Node *q=NULL;
       Node *r=NULL;
       while(p!=NULL)
       {
           r=q;
           q=p;
           p=p->next;
           q->next=r;
       }
       head = q;
       return head;
   }
   //Function to add two numbers represented by linked list.
   struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
       // code here
       Node *p=first;
       Node *q=second;
       p = reverse(p);
       q = reverse(q);
       int carry = 0;
       Node *head=NULL;
       
       while(p!=0 && q!=0)
       {
           int sum=0;
           sum+=p->data + q->data + carry;
           Node *temp=new Node(sum%10);
           temp->next=head;
           head=temp;
           carry=sum/10;
           p=p->next;
           q=q->next;
       }
       
       while(p!=0)
       {
           int sum=0;
           sum+=p->data + carry;
           Node *temp=new Node(sum%10);
           temp->next=head;
           head=temp;
           carry=sum/10;
           p=p->next;
           
       }
       
       while(q!=0)
       {
           int sum=0;
           sum+=q->data + carry;
           Node *temp=new Node(sum%10);
           temp->next=head;
           head=temp;
           carry=sum/10;
           q=q->next;
       }
       if(carry)
       {
           Node *temp=new Node(carry);
           temp->next=head;
           head=temp;
       }
       
       return head;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends