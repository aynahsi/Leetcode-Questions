//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int n = a.size() -1 ;
	    int m = b.size()-1 ;
	    int sum = 0;
	    vector<int>ans ;
	    int carry = 0;
	   while (n>=0 || m>=0 ){ 
	        
	        if(n<0){
	        sum=   b[m] + carry;
	        }
	        else if (m <0){
	              sum=   a[n]+ carry;
	        }
	        else {
	              sum=  a[n]+ b[m] + carry;
	        }
	        
	        
	       if ( sum/10 > 0 ){
	           ans.push_back(sum%10) ;
	           carry = sum/10;
	           if (n == 0 && m == 0){
	               ans.push_back(sum/10) ;
	           }
	           n--;
	           m--;
	       }
	       else {
	           carry = 0;
	           ans.push_back(sum) ;
	           n--;
	           m--;
	       }
	    }
	    
	    reverse(ans.begin() ,ans.end()) ;
	    return ans ;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends