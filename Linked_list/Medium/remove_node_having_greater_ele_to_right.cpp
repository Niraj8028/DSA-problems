//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node* reverse(Node*head){\
    if(head==NULL && head->next==NULL){
        return head;
    }

    Node*temp=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
    
}

class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        
        head=reverse(head);
        Node*temp=head->next;
        
        Node*prev=head;
        int mx=prev->data;
        while(temp!=NULL){
            if(temp->data<mx){
                prev->next=temp->next;
                temp=prev->next;
            }
            else{
                mx=temp->data;
                prev=temp;
                temp=temp->next;
            }
        }
        head=reverse(head);
        return head;
        
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends