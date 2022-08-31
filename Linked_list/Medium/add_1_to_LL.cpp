//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{   
    Node* reverse(Node* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node* newhead=reverse(head);
        Node* temp=newhead;
        Node* prev=NULL;
        int carry=0;
        while(temp!=NULL){
            int val=temp->data;
            int sum=0;
            if(prev==NULL){
                sum=val+1;
            }
            else{
                sum=val+carry;
            }
            int digit=sum%10;
            int carry=sum/10;
            temp->data=digit;
            prev=temp;
            temp=temp->next;;
            
        }
        if(carry==1){
            Node* digit=new Node(1);
            prev->next=digit;
            
        }
        return reverse(newhead);
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends