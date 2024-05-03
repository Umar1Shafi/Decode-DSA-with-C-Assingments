ListNode* insertionSortList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* dummy = new ListNode(0);
    ListNode* current = head;
    
    while (current) {
        ListNode* nextNode = current->next;
        ListNode* prev = dummy;
        while (prev->next && prev->next->val < current->val) {
            prev = prev->next;
        }
        current->next = prev->next;
        prev->next = current;
        current = nextNode;
    }
    
    return dummy->next;
}
