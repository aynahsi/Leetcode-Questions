//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int>pq;
        long long sum = 0 ;
        for (int i =0;i <N;i++){
        pq.push(A[i]) ;
        
        }
        while (K>0){
        int node = pq.top() ;
        pq.pop();
        sum = sum+node;
        pq.push(node/2) ;
        K--;
    }
    
    return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends