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
class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*l3= new ListNode(0);
        ListNode*tail=l3;
        int c=0;

        while(l1!=nullptr || l2!=nullptr || c!=0){
            int d1= (l1 != nullptr) ? l1->val : 0;
            int d2= (l2 != nullptr) ? l2->val : 0;
            int sum= c+ d1+d2;
            int digit=sum%10;
            c=sum/10;

            ListNode*newNode= new ListNode(digit);
            tail->next=newNode;
            tail=tail->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode* ans=l3->next;
        delete l3;
        return ans;

    }
};