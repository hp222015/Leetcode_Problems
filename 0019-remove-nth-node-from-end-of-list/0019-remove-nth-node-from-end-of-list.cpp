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
        int l=0,count=0;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
            
        }
        count=l;
        l=l-n;
        int i=1;
        temp=head;
        if(count==n)
            return head->next;
        while(i!=l)
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};