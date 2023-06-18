//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    
    Node* reverse(Node* head ){
        Node* current = head;
        Node* prev = NULL;
        Node* next = current->next;
        
        //reversing 
         while (current != NULL) {
           
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head ;
        
    }
    Node *compute(Node *head)
    {
        // your code goes here
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
     head = reverse(head) ;
    
        Node* ptr = head;
        Node* temp = head->next;
        int ma = head->data;
        while(temp != NULL){
            
            if (ma > temp->data ){
                temp = temp->next ;
                ptr->next = temp;
                
            }
            else if (ma <= temp->data){
                ma = temp->data ;
                temp= temp->next ;
                ptr = ptr->next ;
            }
        }
            return reverse(head);
        }
    
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends