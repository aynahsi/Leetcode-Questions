//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    
    void nextsolve(int* M,vector<int>&next ,int m){
        stack<int>st;
        st.push(-1);
        
        for( int i = m-1; i>=0; i--){
           int curr=M[i];
            while( st.top() != -1 && M[st.top()] >= curr ){
                st.pop();
            }
            next.push_back(st.top());
                st.push(i);
                
            
        }
    }
    
    void prevsolve(int* M,vector<int>&prev ,int m){
        stack<int>st;
        st.push(-1);
        
        for( int i = 0; i<m; i++ ){
            int curr=M[i];
            while( st.top() != -1 && M[st.top()] >= curr ){
                st.pop();
            }
                 prev.push_back(st.top());//I PUT THIS AFTER THE BELOW LINE 
                st.push(i);
                
            
        }
    }
    
    
    int histogramarea(int* M , int m){
        
        vector<int>next;
        vector<int>prev;
        
        nextsolve(M,next,m) ;
        reverse(next.begin(), next.end());
        prevsolve(M,prev,m) ;
        
        int area = INT_MIN;
        
        for ( int i =0; i<m; i++){
            int l = M[i];
           
            
            if (next[i] == -1){
                next[i] = m;//MISTAKES I PUT 2 EQUALS HERE
            }
             int b = next[i] -prev[i] -1 ;//I PUT THIS BEFORE THE ABOVE CHECK CONDITION
            int newarea= l*b;
            area = max(area, newarea) ;
        }
            return area;
    }
    
    
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int area = histogramarea(M[0], m) ;
        
        for ( int i =1 ; i < n ; i ++){
            for ( int j = 0; j < m; j++ ){
                if(M[i][j] != 0)
                {
                    M[i][j] = M[i][j] + M[i-1][j];
                }
                else {
                    M[i][j] = 0;//histogrram mei sabse neeche 0 hoga to hawa mei block thodi udhega isliye overall 0 consider kardia
                }
            
            }
        area = max(histogramarea(M[i], m), area);
        }
        
        return area;
            
    }
    
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends