//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    bool hasDivisor(int k,int N ){
        int nodiv = 0 ;
        for ( int i = 1 ; i <= sqrt(k) ; i++){
            if( (k%i) == 0 ){
                if (i* i == k ){
                    nodiv++;
                }
                else nodiv = nodiv+2;
            }
        }
        
        if (nodiv == N){
                    return true;
                }
        else 
        {
            return false;
            
        }
    }
    
    
    int count(int A,int B,int N){ 
        // code here
        int ans = 0 ;
        for( int i = A ; i <= B ; i++){
           bool noofdiv =  hasDivisor( i, N );
           
           if (noofdiv == true){
               ans++ ;
           }
           
        }
        
        return ans ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.count(A,B,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends