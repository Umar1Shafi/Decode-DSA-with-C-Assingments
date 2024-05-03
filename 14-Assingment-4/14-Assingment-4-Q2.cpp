#include <iostream>

using namespace std;

// ListNode definition
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function prototype
ListNode* mergeZeroNodes(ListNode* head);

// Main function
int main() {
    // Input for problem 2
    ListNode* head2 = new ListNode(0);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(1);
    head2->next->next->next = new ListNode(0);
    head2->next->next->next->next = new ListNode(4);
    head2->next->next->next->next->next = new ListNode(5);
    head2->next->next->next->next->next->next = new ListNode(2);
    head2->next->next->next->next->next->next->next = new ListNode(0);
    
    // Output for problem 2
    ListNode* result2 = mergeZeroNodes(head2);
    cout << "Output for problem 2: ";
    while (result2) {
        cout << result2->val << " ";
        result2 = result2->next;
    }
    cout << endl;

    return 0;
}

// Implementation of function for problem 2
ListNode* mergeZeroNodes(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    
    while (prev->next) {
        int sum = 0;
        ListNode* start = prev->next;
        while (start && start->val != 0) {
            sum += start->val;
            start = start->next;
        }
        
        if (sum > 0) {
            ListNode* merged = new ListNode(sum);
            prev->next = merged;
            prev = merged;
        } else {
            prev = start;
        }
    }
    
    return dummy.next;
}
