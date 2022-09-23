//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    stack<int> Reverse(stack<int> &St){
        if(St.size() == 1 ) return St;
        int temp = St.top();
        St.pop();
        Reverse(St);
        Insert(St, temp);
        return St;
    }
    void Insert(stack<int> &St, int a){
        if(St.size() == 0){
            St.push(a);
            return;
        }
        int tmp = St.top();
        St.pop();
        Insert(St, a);
        St.push(tmp);
        return;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends