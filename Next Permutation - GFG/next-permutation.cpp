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
        int breakpoint  ;
        for (int i = N-1; i >= 0;i--){
            if (arr[i-1] < arr[i]){
                 breakpoint = i-1 ;
                break ;
            }
        }
        
        if (breakpoint <0){
            reverse(arr.begin() , arr.end()) ;
            return arr;
        }
        else{
            for (int j = N-1 ; j >=0 ; j-- ){
                if (arr[breakpoint] <arr[j]){
                    swap(arr[breakpoint] ,arr[j]);
                    sort(arr.begin()+ breakpoint+1,arr.end() );
                    return arr;
                }
            }
        }
        
        
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