//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int mod = 1e9 + 7;

    int countWays(int n)
    {
        // your code here
        	int prevprev = 1;
				int prev = 2;
				int next = -1;
				if (n == 1)return 1 ;
				if (n ==2 )return 2 ;
		    for (int i = 2 ; i <n ;i++){
					 next = (prev + prevprev)%mod;
					prevprev =prev;
					prev = next ;
				}

				return next%mod ;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends