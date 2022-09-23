//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
   private:
   struct Node 
   {
       int key;
       int value;
       Node* prev;
       Node* next;
       Node(int key1, int value1)
       {
           key = key1;
           value = value1;
       }
   };
   Node* head = new Node(0,0);
   Node* tail = new Node(0,0);  
   
   unordered_map<int,Node*> map1;
   int capacity;
   public:
   //Constructor for initializing the cache capacity with the given value.
   LRUCache(int cap)
   {
       capacity = cap;
       head->next = tail;
       tail->prev = head;
   }
   
   //Function to return value corresponding to the key.
   int get(int key)
   {
       if(map1.find(key) != map1.end())
       {
           Node* existingNode = map1[key];
           int value = existingNode->value;
           deleteNode(existingNode);
           addNode(key,value);
           map1.erase(key);
           map1[key] = head->next;
           return value;
       }
       return -1;
   }
   
   //Function for storing key-value pair.
   void set(int key, int value)
   {
       if(map1.find(key) != map1.end())
       {
           Node* existingNode = map1[key];
           map1.erase(key);
           deleteNode(existingNode);
       }
       
       if(map1.size() == capacity)
       {
           map1.erase(tail->prev->key);
           deleteNode(tail->prev);
       }
       
       addNode(key,value);
       map1[key]=head->next;

   }
   void addNode(int key,int value)
   {
       Node* createNode = new Node(key,value);
       createNode->next = head->next;
       head->next->prev = createNode;
       head->next = createNode;
       createNode->prev=head;
   }
   
   void deleteNode(Node* deletedNode)
   {
       deletedNode->prev->next = deletedNode->next;
       deletedNode->next->prev = deletedNode->prev;
       delete deletedNode;
   }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends