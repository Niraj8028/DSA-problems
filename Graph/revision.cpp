I learned a lot from this channel and his explaination is  always on the point👍.Below is the code for solving above discussed problem:

#include<bits/stdc++.h>
using namespace std;
int dijkstra(int V,vector<vector<int>> adj[],int S,int dest)
{
    set<pair<int, int>> shortestNode;
    	vector<int> shortestDistance(V, INT_MAX);
                                           //{wt,src}
    	shortestNode.insert({0, S});
    	shortestDistance[S] = 0;
    
    	while(!shortestNode.empty()){
    		auto itr = shortestNode.begin();
    		int src = itr->second; //src 
    		int distance = itr->first;//wt
    
    		shortestNode.erase(itr); //remove first pair from set
    
    		for(auto u:adj[src]){
    			int adjNode = u[0];
    			int dist = u[1];
    
    			if(shortestDistance[adjNode] > shortestDistance[src] + dist){
    				shortestDistance[adjNode] = shortestDistance[src] + dist;
    				shortestNode.insert({shortestDistance[adjNode], adjNode});
    			}
    		}
    	}
    	
    	return shortestDistance[dest];
    }

 
int main(){
    int V,E;
    cin>>V>>E;

    vector<vector<int>> adj[V];
    int count=0;
    while(count++<E)
    {
        int u,v;
        cin>>u>>v;
        vector<int>t1,t2;
        t1.push_back(v);
        t1.push_back(0);
        adj[u].push_back(t1);
        t2.push_back(u);
        t2.push_back(1);
        adj[v].push_back(t2);
   }
   int src,dest;
   cout<<"source:";
   cin>>src;
   cout<<"destination:";
   cin>>dest;
   int res=dijkstra(V,adj,src,dest);
   cout<<"result="<<res;
return 0;
}