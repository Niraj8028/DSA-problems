//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void solve(stack<int>&st,int mid){
        
        int s = st.size();
        
        
        int ele = st.top();
        st.pop();
        if(s==mid) return;
        solve(st,mid);
        st.push(ele);
        return;
        
    }
    
    
    void deleteMid(stack<int>&st, int size)
    {
        // code here.. 
        if(size==1){
            st.pop();
        }
        int mid=(size+1)/2;
        solve(st,mid);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends