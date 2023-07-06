//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    
    int solve(vector<int>&dp, int arr[], int index){
        
        if(dp[index]!=  -1)return dp[index];
        if(index == 0)return arr[index] ;
        if(index < 0)return 0 ;
       
        int pick = arr[index] + solve(dp,arr,index-2) ;
        int notpick = 0 + solve(dp,arr, index-1) ;
        dp[index] = max(pick,notpick) ;
        return dp[index] ;
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n,-1) ;
       return solve(dp,arr, n-1);
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends