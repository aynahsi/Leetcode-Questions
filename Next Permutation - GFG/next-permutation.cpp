//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int index = -1;
        for ( int i = N-1;i >=0;i--){//findig the breakpoint
            if (arr[i]>arr[i-1]){
                index = i-1;
                break;
            }
        }
        
        if ( index == -1){
            reverse(arr.begin(),arr.end());
        }
        
        else{
        for (int i = N-1;i>index;i--){
            if (arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        int k =index+1;
        sort(arr.begin()+k ,arr.end());
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends