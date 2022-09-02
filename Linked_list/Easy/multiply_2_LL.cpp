//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
 
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = new Node(data);
    
    return new_Node;
}
 
 
 Node *reverse(Node **r)
{
    Node *prev =NULL;
    Node *cur = *r;
    Node *nxt;
    while(cur!=NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *r = prev;
}
/* Function to insert a Node at the beginning of the Doubly Linked List */
void push(struct Node** head_ref, int new_data)
{
    /* allocate Node */
    struct Node* new_Node = newNode(new_data);
 
    /* link the old list off the new Node */
    new_Node->next = (*head_ref);
 
    /* move the head to point to the new Node */
    (*head_ref) = new_Node;
}


void freeList(struct Node *Node)
{
	struct Node* temp;
    while(Node != NULL)
    {

        temp=Node;
        Node = Node->next;
        free(temp);
    }

}

 
/* Multiply contents of two linked lists */
long long  multiplyTwoLists (struct Node* , struct Node*);
 
// A utility function to print a linked list
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
 
/* Driver program to test above function */
int main(void)
{


   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {

    struct Node* first = NULL;
    struct Node* second = NULL;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
			cin>>x;
			push(&first, x);
	    }
         cin>>m;
	    for(i=0;i<m;i++)
	    {
			cin>>x;
	    push(&second, x);
	    }

	     reverse(&first);
	     reverse(&second);
		 long long res = multiplyTwoLists(first,second);
	    
	    cout<<res<<endl;
        freeList(first);
        freeList(second);

   }
   return 0;
}

// } Driver Code Ends


/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  int mod=1000000007;
  long long int num1=0,num2=0;
  Node* p1;
  Node* p2;
  p1=l1;
  p2=l2;
  while(p1!=NULL){
      num1=(num1*10+(p1->data))%mod;
      p1=p1->next;
  }
  while(p2!=NULL){
      num2=(num2*10+(p2->data))%mod;
      p2=p2->next;
  }
  return (num1*num2)%mod;
}