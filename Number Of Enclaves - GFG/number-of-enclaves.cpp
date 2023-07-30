//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void solve( int row ,int col ,vector<vector<int>> &grid,int n,int m, vector<vector<int>>&vis ){
        vis[row][col] = 1;
        
        int drow[] = {-1,0,1,0};
        int dcol[] ={0,1,0,-1} ;
        
        for(int k = 0 ; k < 4; k++){
        int nrow = row + drow[k] ;
        int ncol = col + dcol[k] ;
        
        if (nrow >=0 && nrow<n && ncol>=0 && ncol <m && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0){
             
             solve(nrow,ncol, grid,n,m,vis);
        }
        
    }
    }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size() ;
        int m = grid[0].size() ;
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < m ; j++){
                if ( i == 0 || j == 0 || i == n-1 || j == m-1){
                    if (grid[i][j] == 1 && vis[i][j] == 0){
                        solve(i, j, grid,n,m, vis);
                    }
                }
            }
        }
        
        int count = 0 ;
        for (int i = 0 ; i < n ;i++){
            for (int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1 && vis[i][j] == 0){
                    count++;
                }
            }
        }
        
        return count ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends