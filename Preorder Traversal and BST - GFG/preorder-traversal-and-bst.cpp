//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int index=0;
    void solve(int arr[],int mini,int maxi,int N){
       if((index>=N || mini>arr[index] || arr[index]>maxi))return ;
       int node=arr[index++];
        solve(arr,mini,node,N);
       solve(arr,node,maxi,N);
        
    }
    
    int canRepresentBST(int arr[], int N) {
        // code here
        int mini=INT_MIN;
        int maxi=INT_MAX;
        solve(arr,mini,maxi,N);
        if (index>=N)return 1;
        else return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends