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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int count=0,sum=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        count=count-1;
       while(head!=NULL)
       {
          sum+=head->val*pow(2,count);
           count--;
           head=head->next;
       }
        return sum;
    }
};