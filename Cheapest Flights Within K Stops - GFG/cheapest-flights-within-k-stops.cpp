//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int k)  {
        // Code here
         vector<pair<int,int>>adj[n] ;
        for (auto it : flights){
            adj[it[0]].push_back({it[1],it[2]}) ;//storing new dset and price 
            
        }
        
        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>> >pq;
       
           
            pq.push({0,{src, 0}});//k stops src and price 
             

             vector<int>dest(n,1e9) ;
             dest[src] = 0 ;
        
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int stop = it.first ;
            int node = it.second.first ;
            int money = it.second.second ;
            
            for (auto i : adj[node]){
                int newnode = i.first ;
                int paisa = i.second ;

                if (paisa +money <dest[newnode] && stop <= k ){
                    dest[newnode] = paisa+ money ;
                    pq.push({stop+1,{newnode,money+paisa}}) ;
                }
            }
         
        }
    if(dest[dst] == 1e9) return -1;
    return dest[dst] ;

        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends