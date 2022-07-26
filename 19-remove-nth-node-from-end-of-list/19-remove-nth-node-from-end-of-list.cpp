/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
           ListNode* temp=head;
        int k=0;
        
        if (head->next==NULL){
            return NULL;
        }
       
        ListNode* prev=head;
        temp=head;
for (int i=1;i<=n;i++)  {
    temp=temp->next;
}   
        // if (n==1){
        //     temp->next=NULL;
        // }
        if (temp==NULL)
        {head=head->next;
        return head;}        
        
        while(temp->next!=NULL){
            temp=temp->next;
            prev=prev->next;
        }
        
       prev->next= prev->next->next;
        return head;
        }
    
    
};


     
