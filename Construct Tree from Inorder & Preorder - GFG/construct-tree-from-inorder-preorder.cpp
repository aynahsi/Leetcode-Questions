//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    Node* check(int *in, int start, int end, int *pre, int &index, int size) {
        if(index >= size || start > end)
            return NULL;
        
        Node* root = new Node(pre[index]);
        int k=-1;
        for(int i=start;i<=end;i++) {
            if(pre[index] == in[i]) {
                k = i;
                break;
            }
        }
        index++;
        root->left = check(in, start, k-1, pre, index, size);
        root->right = check(in, k+1, end, pre, index, size);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int index=0;
        return check(in, 0, n-1, pre, index, n);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends