//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n,vector<int>(W+1,0)) ;
      int maxi = INT_MIN;
      for (int i = wt[0]; i <=W;i++)dp[0][i] = val[0] ;
      
      for (int index = 1 ; index<n ;index++){
          for (int j= 1 ;  j <= W ; j++){
       int notpick = dp[index-1][j];
         int pick = INT_MIN;
         if (j>= wt[index] ){
            pick = val[index] + dp[index-1][j-wt[index]];
            
         }
           dp[index][j] = max(pick,notpick) ;
    }
      }
    return dp[n-1][W];
}
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends