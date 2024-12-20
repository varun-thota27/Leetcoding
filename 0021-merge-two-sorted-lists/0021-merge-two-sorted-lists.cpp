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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* temp=new ListNode(0);
        ListNode*cur=temp;

        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                cur->next=l2;
                l2=l2->next;
            }
            else
            {
                cur->next=l1;
                l1=l1->next;
            }
            cur=cur->next;
        }
        cur->next=l1?l1:l2;
        return temp->next;
    }
};