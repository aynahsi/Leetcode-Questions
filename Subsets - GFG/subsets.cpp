//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void helper(int i,vector<int>& A, vector<vector<int>>&ans,  vector<int>&temp  ){
        
        if ( i >= A.size()){//base case
            ans.push_back(temp);
            return ;
        }
        temp.push_back(A[i]);
        helper(i+1, A, ans, temp);
        temp.pop_back();
        helper(i+1, A, ans, temp);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>temp ;
        helper(0,A,ans,temp) ;
        
        sort(ans.begin() ,ans.end()) ;
        return ans ;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends