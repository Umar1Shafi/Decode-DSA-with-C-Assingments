ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* current = list1;
    for (int i = 1; i < a; ++i) {
        current = current->next;
    }
    ListNode* prevA = current;
    for (int i = a; i <= b; ++i) {
        current = current->next;
    }
    ListNode* nextB = current->next;
    
    prevA->next = list2;
    while (list2->next != nullptr) {
        list2 = list2->next;
    }
    list2->next = nextB;
    
    return list1;
}
