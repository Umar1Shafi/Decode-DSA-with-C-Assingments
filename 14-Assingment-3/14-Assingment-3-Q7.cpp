ListNode* reverseKGroup(ListNode* head, int k) {
    if (!head || k == 1) return head;
    int len = 0;
    ListNode* temp = head;
    while (temp) {
        len++;
        temp = temp->next;
    }
    
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    
    for (int i = 0; i < len / k; ++i) {
        ListNode* current = prev->next;
        ListNode* nextNode = current->next;
        for (int j = 1; j < k; ++j) {
            current->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
            nextNode = current->next;
        }
        prev = current;
    }
    
    return dummy.next;
}
