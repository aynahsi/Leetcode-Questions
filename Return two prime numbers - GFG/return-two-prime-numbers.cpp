//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        
        vector<int>prime(N+1,1);
        
        prime[0] = 0;
        prime[1] = 0;
        for ( int i= 2 ; i <= sqrt(N) ; i++  ){
            
            for ( int j= i*i ; j <= N ; j = j+i){
                prime[j] = 0 ;
            }
        }
        
        vector<int>ans ;
        for ( int i = 2 ; i < N ; i ++){
            
            if ( prime[i] == 1 && prime [N-i] == 1 ){
            ans.push_back(i);
            ans.push_back(N-i);
             return ans ;
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
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends