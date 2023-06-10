//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        
        int index = 1 ;
        int count = 0;
        while(N!=0){
            if ( (N & 1) == 1 ){
                count++;
                 N=N>>1;
            }
            else{
            N=N>>1;
            index++;
            }
        }
        
        if (count == 1){
            return index;
        }
        else{ return -1;}
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends