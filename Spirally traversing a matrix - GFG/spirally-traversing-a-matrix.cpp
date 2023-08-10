//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
       
        int rstart = 0 ;
        int rend = r-1;
        int cstart = 0 ;
        int cend = c-1;
        int total = r*c ;
        int count = 0 ;
        vector<int> temp ;
        while (count < total){
        for (int i = cstart ; i <= cend  && count <total; i++){
            temp.push_back(matrix[rstart][i]);
            count++;
        }
        rstart++;
         for (int i = rstart ; i <= rend   && count <total ; i++){
            temp.push_back(matrix[i][cend]);
            count++;
        }
        cend--;
        
         for (int i = cend ; i >= cstart   && count <total ; i--){
            temp.push_back(matrix[rend][i]);
            count++;
        }
        rend--;
        
         for (int i = rend ; i >= rstart   && count <total ; i--){
            temp.push_back(matrix[i][cstart]);
            count++;
        }
        cstart++ ;
        
        }
        
        return temp ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends