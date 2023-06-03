//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };*/

class Solution {
public:
    
    // void preorder(Node* &root,vector<int>& ans){
    //     if (!root){
    //         return;
    //     }
        
    //     preorder(root->left,ans);
    //     ans.push_back(root->data);
    //     preorder(root->right,ans);
        
        
    // }
    void solve(vector<int>&n,int s,int e,vector<int>&ans){
        if (s>e){
            return ;
        }
        
        int mid = (s + e)/2;
        ans.push_back(n[mid]);
        solve(n,s,mid-1,ans);
        solve(n,mid+1,e,ans);
        
        
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        
        vector<int>ans;
        int start = 0;
        int end = nums.size()-1;
        
        solve(nums,start,end,ans);
        
        return ans;
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
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends