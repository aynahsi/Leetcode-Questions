//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int mod =100000;
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        queue<pair<int,int>>q;
        vector<int>dist(1e5,1e9) ;
        
        q.push({start,0});
        dist[start] = 0;
        while(!q.empty()){
            auto it =q.front() ;
            q.pop() ;
            int num = it.first ;
            int move = it.second ;
            
            for (auto i :arr ){
                int newnum = (i* num)% mod ;
                
                if (end == newnum){
                    return move+1;
                }
                if (1 + move< dist[newnum]){
                    dist[newnum] = move+1;
                    q.push({newnum , move+1}) ;
                }
                
                    
                
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends