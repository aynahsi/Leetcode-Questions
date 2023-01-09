//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        
      //Your code here
    //   unordered_map<int,int> m ;
    //   for(int i = 0 ; i< n ; i++)
    //   {
    //       m[arr[i]] = 1 ;
          
    //   }
      
      
    //   for(int i = 0 ; i< n ; i++)
    //   {
    //       if(m.find(arr[i] -1) != m.end())
    //       {
    //           m[arr[i]] = 0 ;
    //       }
    //   }
      
    //   int Ans = 0 ;
    //   for(int i = 0 ; i< n ;i++)
    //   {
    //       if(m[arr[i]] == 1)
    //       {
    //           int Length =1;
    //           while(m.find(arr[i] + Length) != m.end())
    //           {
    //               Length++ ;
    //           }
    //           Ans = max(Ans,Length) ;
    //       }
    //   }
    //   return Ans 
      unordered_map<int,int>m;
      
      for (int i=0;i<n;i++){
          m[arr[i]]=1;
      }
      
      for (int i =0;i<n;i++){
          if (m.find(arr[i]-1)!= m.end()){
              m[arr[i]]=0;
          }
      }
      
      int ans=0;
      for (int i =0;i<n;i++){
          
          if (m[arr[i]]==1){
              
          int length=1;
          while (m.find(arr[i]+length)!= m.end()){
              length++;
              
          }
          ans=max(ans,length);
          }
          
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends