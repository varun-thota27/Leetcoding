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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (!head || left == right) {
            return head;
        }

        ListNode* temp = head;
        vector<int> v;

        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        reverse(v.begin() + (left - 1), v.begin() + right);

        temp = head;
        for (int x : v) {
            temp->val = x;
            temp = temp->next;
        }

        return head;
    }
};
