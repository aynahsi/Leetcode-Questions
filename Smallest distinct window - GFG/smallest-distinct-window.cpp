//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here 
        unordered_set <char>s;
        for (int i = 0 ; i < str.length() ;i++){
            s.insert(str[i]);
        }
        
        int n =s.size() ;
        int i = 0 ;
        int j = 0 ;
        int ans = str.length()+1;
        unordered_map<char,int>mp;
        
        while (j <str.length()){
            mp[str[j]]++;
            
            
            if (n == mp.size()){
                while (mp[str[i]] > 1){
                    mp[str[i] ]--;
                    i++;
                }
                ans= min(ans ,j-i+1) ;
            }
            
           j++; 
        }
        return ans ;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends