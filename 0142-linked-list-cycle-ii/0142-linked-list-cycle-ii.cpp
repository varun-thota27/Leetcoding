/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        int f=0;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                f=1;
                break;
            }
        }
        if(!f)
        return NULL;

        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;


        
        
    }
};