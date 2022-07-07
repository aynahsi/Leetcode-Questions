// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    string temp="";
    int n=S.length();
    int freq[26]={0};//important to initialize it to 0 otherwise garbage value stored which can be a problem.
    
    for (int i=0;i<n;i++){//storing in freq aray
       int k= S[i]-'a';
       freq[k]++;
    }
    for (int i=0;i<n;i++){
        int j=S[i]-'a';//integer
        if (freq[j]>0){
            temp.push_back(S[i]);
            freq[j]=0;
        }
    }
    return temp;
}
	};


// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends
