//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies + N);
        
        int i = 0 ;
        int j = N;
        int mincost = 0;
        int maxcost = 0;
        
        int freec = K;
       while(i<j){
            mincost = candies[i] +mincost;
            
            K= freec;
            while (K>0 && i<j){
                
                j--;
                K--;
            }
            i++;
        }
        
        i = -1;
        j = N-1;
        while(i<j){
            maxcost  = candies[j] +maxcost;
            
            K=freec;
            while (K>0 && i<j){
                
                i++;
                K--;
            }
            j--;
        }
        
        vector<int>ans;
        ans.push_back(mincost);
        ans.push_back(maxcost) ;
        return ans;
           }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends