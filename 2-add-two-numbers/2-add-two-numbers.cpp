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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode();
        ListNode* ohk=temp;
        
       
        int carry=0;
        
       while((l1!=NULL ||l2!=NULL) || carry){
            int ans=0;
        
        if (l1!=NULL){
             ans=ans+l1->val;
            l1=l1->next;
        }
        if (l2!=NULL){
             ans=ans+l2->val;
            l2=l2->next;
        }
        ans=ans+carry;
        carry=ans/10;
            ListNode *node=new ListNode(ans%10);
             ohk -> next = node; 
            ohk = ohk -> next;
       }
            return temp->next;
    };
        
       

};