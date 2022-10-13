//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int> st;
        st.push(0);
        vector<int> final(n,-1);
        
        for(int i=1;i<n;i++){
            int next=arr[i];
            if (!st.empty() && next<arr[st.top()]){
                while(!st.empty() && next<arr[st.top()]){
                final[st.top()]=next;
                st.pop();
                }
                st.push(i);
                
            }
            else {
            st.push(i);
            }
            
        }
        return final;
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends