//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>st;
    for(int i=0; i<k; i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    
    queue<int>ans;
    while(!st.empty()){
        int y=st.top();
        st.pop();
        ans.push(y);
    }
    while(!q.empty()){
        int z=q.front();
        q.pop();
        ans.push(z);
    }
    return ans;
}