//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int numberOfSubarrays(vector<int>& arr, int N, int target){
        // code here
        
      unordered_map<int,int>mp;
        int count = 0;
        int sum = 0;
        for ( int i = 0 ;i<N ;i++){
            sum = sum + arr[i];
           
            if (sum == target){
                 count++;
            }
            
                if(mp.find(sum-target) != mp.end()){
                   count=count+ mp[sum-target];
                }
            
            
            mp[sum]++;
            }
            
        
        return count;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int target; 
        cin >> target;
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin >> arr[i];
        Solution obj;
        cout<<obj.numberOfSubarrays(arr, N, target)<<endl;
    }
    return 0;
}
// } Driver Code Ends