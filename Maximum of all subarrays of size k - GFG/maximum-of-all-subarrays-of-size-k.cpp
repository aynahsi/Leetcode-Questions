//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int i =0;
        int j = 0;
        deque<int>q;
        vector<int>final;
        while(j<n){
            
            while (!q.empty() && arr[j]>q.back()){//popping the starting elements that are useless and smaller than the number
                q.pop_back();
            }
            q.push_back(arr[j]);
            
            
            if (j-i+1 < k){
                j++;
            }
            
            else if (j-i+1 == k){
                final.push_back(q.front());
                
                if (q.front() == arr[i]){
                    q.pop_front();
                }
            i++;
            j++;
            }
        }
        
        return final;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends