//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
    int balanced=0;

       int ans=0;

       for(auto it:S)

       {

           if(it=='[')

           {

               balanced++;

           }

           else

           {

               balanced--;

               if(balanced<0)

               {

                   ans+=-balanced;

               }

           }

       }

       return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends