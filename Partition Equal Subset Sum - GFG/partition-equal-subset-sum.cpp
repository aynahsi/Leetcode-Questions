//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool solve(int index,int target,int arr[],vector<vector<int>>&dp){
        
        if(target == 0 ){
            return true;
        }
        
        if (index == 0 ){
            return(arr[0] == target) ;
        }
        
        if(dp[index][target] != -1) return dp[index][target] ;
        int notpick = solve(index-1,target,arr,dp) ;
        int pick = false;
        if (target >= arr[index]){
            pick = solve(index-1 , target - arr[index] ,arr,dp) ;
        }
        
        return dp[index][target] =  pick | notpick ;
    }
    
    int equalPartition(int N, int arr[])
    {
       
        int sum = 0 ;
        for(int i = 0 ; i < N ; i++){
            sum = sum + arr[i];
        }
        
        if (sum%2 != 0 )return 0;
        int target = sum/2 ;
        
         vector<vector<int>>dp(N,vector<int>(target+1, -1)) ;
        int ans = solve(N-1,target,arr,dp);
        // code here
        if (ans == true ){
            return 1 ;
        }
        else return 0 ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends