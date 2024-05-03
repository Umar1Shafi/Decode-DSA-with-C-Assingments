#include <iostream>

using namespace std;

// ListNode definition
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function prototype
ListNode* swapPairs(ListNode* head);

// Main function
int main() {
    // Input for problem 1
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    
    // Output for problem 1
    ListNode* result1 = swapPairs(head1);
    cout << "Output for problem 1: ";
    while (result1) {
        cout << result1->val << " ";
        result1 = result1->next;
    }
    cout << endl;

    return 0;
}

// Implementation of function for problem 1
ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) return head;
    
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    
    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;
        
        first->next = second->next;
        second->next = first;
        prev->next = second;
        
        prev = first;
    }
    
    return dummy.next;
}
