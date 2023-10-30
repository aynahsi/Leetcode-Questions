//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int solve(int ind, vector<int>&nums,vector<vector<int>>&dp,int target){
        if (target == 0)
        return dp[ind][target] = 1;


    if (ind == 0)
        return dp[ind][target] = (nums[0] == target);

    if (dp[ind][target] != -1)
        return dp[ind][target];

 
    int notTaken = solve(ind-1, nums,dp,target);

    bool taken = 0;
    if (nums[ind] <= target)
        taken = solve(ind - 1, nums, dp, target - nums[ind]);
        
    return dp[ind][target] = notTaken || taken;
}
    
	vector<int> DistinctSum(vector<int>nums){
	    // Code here
	    int n = nums.size() ;
	    int sum = 0;
	    for(int i = 0 ; i < n ;i++){
	       sum = nums[i]+sum;
	    }
	    vector<vector<int>>dp(n, vector<int>(sum+1, -1)) ;
	    for (int i = 0 ; i <= sum ;i++){
	        solve(n-1,nums,dp,i);
	    } 
	    
	    vector<int>final ;
	    for (int i = 0 ; i <= sum ;i++){
	        if(dp[n-1][i] == 1){
	            final.push_back(i);
	        }
	    }
	    
	    return final ;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}

// } Driver Code Ends