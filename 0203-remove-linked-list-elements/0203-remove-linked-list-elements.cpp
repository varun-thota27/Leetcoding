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
    ListNode* removeElements(ListNode* head, int x) {
        
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
        while (head != nullptr && head->val == x) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
          ListNode*temp=head;
        while(temp && temp->next)
        {
            if(temp->next->val==x)
            {
                ListNode*temp1=temp->next;
                temp->next=temp->next->next;
                delete temp1;
            }
            else
            temp=temp->next;
        }
        return head;
    }
};