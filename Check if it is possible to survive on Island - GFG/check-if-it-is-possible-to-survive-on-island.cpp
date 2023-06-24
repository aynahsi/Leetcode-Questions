//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        
        if (N<M){
            return -1;
        }
        
        
        
        int totalfood = S*M ;
        int ans = 0;
        if(totalfood%N ==0){
            ans = totalfood/N;//ans is the days ki kitne din jakar khareedna hoga 
            
        }
        else{
            ans = totalfood/N + 1;
        }
        
        int buyingdays = S-S/7;//s - sunday
        if (ans <= buyingdays){//jitne din jakar khareeda agar vo valid buyng days se kam hai to theeke
            return ans;
        }
        else {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends