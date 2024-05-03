int maxTwinSum(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next;
    int maxSum = 0;
    
    while (fast) {
        maxSum = max(maxSum, slow->val + fast->val);
        slow = fast->next;
        if (!slow) break;
        fast = slow->next;
    }
    
    return maxSum;
}
