//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>revadj[V];
        
        for ( int i = 0; i < V ;i++){
            for (auto it : adj[i]){
                revadj[it].push_back(i) ;
            }
        }
        int indegree[V] ={0};//IMPORTANT TDONT FORGET
	    
	    for (int i = 0; i < V ; i++){
	        for( auto it : revadj[i]){
	            indegree[it]++ ;
	        }
	    }
	    
	    queue<int>q ;
	    for(int i = 0 ; i < V ;i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	        
	        
	   vector<int>safenode ;    
	   while(!q.empty()){
	       int node = q.front();
	       q.pop();
	       
	       safenode.push_back(node) ;
	       for(auto it : revadj[node]){
	           indegree[it]--;
	           if(indegree[it] == 0)q.push(it) ;
	       }
	   }
	   
	   sort(safenode.begin() , safenode.end()) ;
	  return safenode ;
	        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends