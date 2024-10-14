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
    ListNode* swapNodes(ListNode* head, int k) {
        
        vector<int> v;
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
          v.push_back(temp->val);
          temp=temp->next;
          n++;
        }
        swap(v[k-1],v[n-k]);
        temp=head;
        int i=0;
        while(temp)
        {
            temp->val=v[i];
            temp=temp->next;i++;
        }
        return head;
    }
};