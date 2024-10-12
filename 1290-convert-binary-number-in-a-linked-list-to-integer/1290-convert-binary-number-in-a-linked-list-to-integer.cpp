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
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v;
        ListNode*temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
         reverse(v.begin(),v.end());
         int num=0;
         for(int i=0;i<v.size();i++)
         {
            num += v[i]*pow(2,i);
         }
         return num;
    }
};