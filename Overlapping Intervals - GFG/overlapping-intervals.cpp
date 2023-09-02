//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         sort(intervals.begin(),intervals.end());
         vector<vector<int>>ans ;
               for (int i = 0 ; i < intervals.size() ; i++){
                  int start = intervals[i][0] ;
                   int end = intervals[i][1];
                   if(!ans.empty() && end <= ans.back()[1]){//condition to check ki vo array resides in the range 
                       continue;
                        }
                        
                   else {
                       for(int j = i+1; j < intervals.size() ; j++ ){
                      if (end>= intervals[j][0]){
                           end =max(end,intervals[j][1]) ;
                       }
                       
                       else {
                           break ;
                       }
                       }
                   }
                   
                   ans.push_back({start,end}) ;
               }
               
          return ans ;     
    }           
                    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends