//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector <int>neg;
	    for (int i=0;i<n;i++){
	    if (arr[i]>=0){
	        pos.push_back(arr[i]);
	        
	    }
	    else {
	        neg.push_back(arr[i]);
	    }
	    
	    };
	    
	    int size1=pos.size();
	    int size2=neg.size();
	    int first=0;
	    int sec=0;
	    int i=0;
	   while(first<size1 && sec<size2){
	      
	           
	       
	       if (i%2==0){
	           arr[i]=pos[first];
	           i++;
	           first++;
	       }
	       
	       else {
	           arr[i]=neg[sec];
	           sec++;
	           i++;
	       }
	   }
	
	//when negative sec gets over
	       
	        if (size1>size2){
	            while (first<size1){
	           arr[i]=pos[first];
	           first++;
	           i++;
	            }
	        }
	        
	        else {
	            while (sec<size2){
	            arr[i]=neg[sec];
	            sec++;
	            i++;
	            }
	        }
};
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends