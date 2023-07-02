//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    bool is_prime(int n ){
        if (n == 1 || n == 0 ){
            return 0 ;
        }
        for ( int i = 2 ; i < sqrt(n) ; i++){
            if ( n% 2 == 0){
                return 0 ;
            }
        };
        return 1 ;
    }
    
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int>prime(N+1,1);
        vector<int>ans ;
        prime[0] = 0;
        prime[1] = 0;
        
        for ( int i = 0 ; i*i <= N ; i++){
            if ( is_prime(i) == true ){
                for (int j = i*i ; j <= N ; j =j+i){
                    prime[j] = 0 ;
                }
            }
        }
        
        for (int i = 0 ; i < prime.size() ; i ++){
            if (prime[i] == 1){
                ans.push_back(i) ;
            }
        }
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
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends