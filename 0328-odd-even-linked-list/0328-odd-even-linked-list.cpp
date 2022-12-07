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
        vector<int> odd;
        vector<int> even;
        ListNode* temp=head;
        int count=1;
        while(temp!=NULL)
        {
            if(count%2==0)
                even.push_back(temp->val);
            else
                odd.push_back(temp->val);
            count++;
            temp=temp->next;
        }
        for(auto i:even)
            odd.push_back(i);
        ListNode* res=new ListNode();
        temp=res;
        for(auto i:odd)
        {
            temp->next=new ListNode(i);
            temp=temp->next;
        }
       return res->next; 
    }
};