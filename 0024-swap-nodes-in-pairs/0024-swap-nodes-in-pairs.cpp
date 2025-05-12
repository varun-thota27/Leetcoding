class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
         return head;
        
       ListNode* first=head, *second=head->next,*prev=NULL;

       while(first && second){
        ListNode* third=second->next;

        second->next=first;
        first->next=third;
        if(prev)
        prev->next=second;
        else 
        head=second;

        prev=first;
        first=third;
        if(third)
        second=third->next;
        else
        second=NULL;
       }
       return head;
    }
};
