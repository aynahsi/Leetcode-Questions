//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    
    unordered_map<char,int>mp;
    
  
    
    int i = 0;
    int j = 0 ;
    int ans = -1 ;
    
    int count = 0 ;
    
    
    while (j<s.size()){
        
        
            mp[s[j]]++;
            
            if (mp[s[j]] == 1 ){
                count++;
            }
        
        
        if (count <k){
            j++;
        }
        
        else if (count ==k){
            ans = max(ans ,j-i+1);
            
            j++;
        }
        
        else if (count>k){
            while (count>k){
                mp[s[i]]--;
                if (mp[s[i]] == 0){
                    count--;
                }
                i++;
            }
          j++;
        }
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends