//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string S){
        // code here 
        int n = S.length() ;
        string S2= S;
        reverse(S2.begin() ,S2.end()) ;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1)) ;
        
        for( int i = 0 ; i <= n ; i++)dp[i][0] = 0;
        for (int j = 0 ; j <=n; j++ )dp[0][j] = 0;
        
        for (int i = 1; i <=n ; i++){
            for(int j = 1 ;j <=n ;j++){
                if(S[i-1] == S2[j-1]){
                    dp[i][j] =1 +  dp[i-1][j-1] ;
                }
                
                else{
                    dp[i][j] = max(dp[i-1][j] ,dp[i][j-1]);
                } 
            }
            
        }
        int ans = dp[n][n];
        return n-ans ;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends