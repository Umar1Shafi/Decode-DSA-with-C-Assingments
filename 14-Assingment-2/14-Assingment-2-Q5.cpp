int findLengthOfLoop(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            int length = 1;
            ListNode* temp = slow->next;
            while (temp != slow) {
                temp = temp->next;
                length++;
            }
            return length;
        }
    }
    
    return 0;
}
