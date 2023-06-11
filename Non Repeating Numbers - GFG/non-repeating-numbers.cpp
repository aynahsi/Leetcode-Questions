//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    
    int rmsb(int temp){
        if (temp == 0 ){
            return 0 ;
        }
        
        int index = 0 ;
        while (temp != 0){
            if( temp & 1  ){
                return index ;
            }
            else {
                index++;
                temp=temp>>1;
            }
        }
        return 0;
    }
    
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
         vector<int>ans;
        if (nums.empty()){
            return ans;
        }
        
        int temp = 0 ; 
        for (auto it :nums){
            temp = temp^it ; 
        }
        
       int pos = rmsb(temp) ;
        int first = 0 ;
        int second = 0;
        
        for (auto i : nums){
            if (((i>>pos)  & 1) == 1){
                first =first^i ;
            }
            else {
                second = second ^ i ;
            }
        }
        
       if (first<second){
            ans.push_back(first);
        ans.push_back(second);
       }
       else{
           
            ans.push_back(second);
            ans.push_back(first);
       }
        
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends