//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
       return mergesort(arr,0,N-1);
        
    }
    
    long long mergesort(long long ok[],long long low,long long high)
    {
        long long inversionCount=0;
        if(low<high)
        {
            long long mid=((low+high)/2);
            inversionCount+=mergesort(ok,low,mid);
            inversionCount+=mergesort(ok,mid+1,high);
            inversionCount+=merge(ok,low,mid,high);
        }
        return inversionCount;
    }
    
    long long merge(long long ok[],long long low,long long mid,long long high)
    {
        long long inversions=0;
        if(low<high)
        {
            long long i=low;
            long long j=mid+1;
            long long b[high-low];
            long long k=0;
            
            while(i<=mid && j<=high)
            {
                
                if(ok[i]<=ok[j])
                {
                    b[k]=ok[i];//small wale mei hi daal dia 
                    
                    k++;
                    i++;
                }
                else
                {
                    b[k++]=ok[j++];//second se dala to technically swap
                    inversions=inversions+mid-i+1;
                }
            }
    
            while(i<=mid)
            {
                b[k++]=ok[i++];
            }
    
            while(j<=high)
            {
                b[k++]=ok[j++];
            }
    
            for(long long i=0;i<k;i++)
            {
                ok[low+i]=b[i];
            }
        }
        return inversions;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends