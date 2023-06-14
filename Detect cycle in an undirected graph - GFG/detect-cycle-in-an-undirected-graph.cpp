//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detectcycle(int i ,int prev,int V, vector<int>adj[],int vis[]){
        
            vis[i] = 1;//i is the node
            for(auto it:adj[i]){
                if (vis[it] == 0 ){
                    if (detectcycle(it,i,V,adj,vis) == true)  return true;
                }
                
                else if( it != prev ){
                    return true;
                }
            }
            return false;
         }
        
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]= {0} ;
        // int prev = -1;
        for ( int i = 0 ; i < V; i++ ){
            if(!vis[i]){
               if (  detectcycle(i,-1,V,adj, vis))return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends