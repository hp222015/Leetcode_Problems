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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* res=new ListNode();
        ListNode* temp=head;
        ListNode* temp1=res;
        int count=1;
        while(temp!=NULL)
        {
            if(count%2!=0)
            {
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;
            }                
            temp=temp->next;
            count++;
        }
        temp=head;
        count=1;
         while(temp!=NULL)
        {
            if(count%2==0)
            {
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;

            }                
            temp=temp->next;
             count++;
        }
       return res->next; 
    }
};