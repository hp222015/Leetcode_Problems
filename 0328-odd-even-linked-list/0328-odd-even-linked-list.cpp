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
        ListNode* res1=new ListNode();
        ListNode* res2=new ListNode();
        ListNode* temp=head,* temp1=res1,* temp2=res2;
        int count=1;
        while(temp!=NULL)
        {
            if(count%2!=0)
            {
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;
            }   
            else
            {
               temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
            }
                
            temp=temp->next;
            count++;
        }
        temp1->next=res2->next;
       return res1->next; 
    }
};