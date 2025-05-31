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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int, vector<int>,greater<int>> pq;

        for(auto list: lists){
            while(list){
                pq.push(list->val);
                list=list->next;
            }
        }
        ListNode head;
        ListNode* temp=&head;
        while(!pq.empty()){
            temp->next=new ListNode(pq.top());
            pq.pop();
            temp=temp->next;
        }
        return head.next;
    }
};