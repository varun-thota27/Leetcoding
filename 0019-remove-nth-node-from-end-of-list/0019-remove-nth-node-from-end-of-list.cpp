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
        ListNode*temp=head;
        ListNode*temp1=head;
        while(n){
            temp=temp->next;
            if(temp==nullptr)
            return head->next;
            n--;
        }
       while(temp->next!=NULL)
       {
        temp=temp->next;
        temp1=temp1->next;
       }
       temp1->next=temp1->next->next;

        return head;
    }
};