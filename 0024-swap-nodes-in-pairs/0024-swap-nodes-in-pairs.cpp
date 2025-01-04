class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
         return head;
        
        ListNode* temp = head->next;  
        
        ListNode* prev = nullptr;
        while(head && head->next) 
        {
            ListNode* nextPair = head->next->next; 
            ListNode* second = head->next; 
            second->next = head;
            head->next = nextPair;

            if (prev) 
            prev->next = second;
            
            prev = head;
            head = nextPair;
        }
        
        return temp;
    }
};
