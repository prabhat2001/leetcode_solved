class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;
        while(current && current->next) {
            if(current->val == current->next->val){
                while(current->next && current->next->val == current->val){
                    current= current->next;
                }
                prev->next = current->next;
            }
            else    prev = prev->next;
            current = current->next;
        }
        return dummy->next;
    }
};