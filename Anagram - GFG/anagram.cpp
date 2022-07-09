// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int n=a.length();
        int m=b.length();
        // Your code here
        int temp1[26]={0};
        int temp2[26]={0};
        for (int i=0;i<n;i++){
            int j=a[i]-'a';
            temp1[j]++;
        }
        
        for (int i=0;i<m;i++){
            int k=b[i]-'a';
            temp2[k]++;
    }
   for (int i = 0; i < 26; i++)
        if (temp1[i] != temp2[i])
            return false;
 
    // If all elements were same.
    return true;

};
};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends