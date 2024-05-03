#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ListNode definition
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function prototypes
ListNode* deleteDuplicates(ListNode* head);
ListNode* insertionSortList(ListNode* head);
ListNode* oddEvenList(ListNode* head);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
int getDecimalValue(ListNode* head);
int maxTwinSum(ListNode* head);
ListNode* reverseKGroup(ListNode* head, int k);

// Main function
int main() {
    // Input for problem 1: Remove Duplicates from Sorted List II (Leetcode 82)
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(3);
    head1->next->next = new ListNode(4);
    head1->next->next->next = new ListNode(7);
    head1->next->next->next->next = new ListNode(1);
    head1->next->next->next->next->next = new ListNode(2);
    head1->next->next->next->next->next->next = new ListNode(6);
    
    // Output for problem 1
    ListNode* result1 = deleteDuplicates(head1);
    cout << "Output for problem 1: ";
    while (result1) {
        cout << result1->val << " ";
        result1 = result1->next;
    }
    cout << endl;

    // Input for problem 2: Sort List using Insertion Sort (Leetcode 147)
    ListNode* head2 = new ListNode(4);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(1);
    head2->next->next->next = new ListNode(3);
    
    // Output for problem 2
    ListNode* result2 = insertionSortList(head2);
    cout << "Output for problem 2: ";
    while (result2) {
        cout << result2->val << " ";
        result2 = result2->next;
    }
    cout << endl;

    // Input for problem 3: Odd Even Linked List (Reorder) (Leetcode 328)
    ListNode* head3 = new ListNode(1);
    head3->next = new ListNode(2);
    head3->next->next = new ListNode(3);
    head3->next->next->next = new ListNode(4);
    head3->next->next->next->next = new ListNode(5);
    
    // Output for problem 3
    ListNode* result3 = oddEvenList(head3);
    cout << "Output for problem 3: ";
    while (result3) {
        cout << result3->val << " ";
        result3 = result3->next;
    }
    cout << endl;

    // Input for problem 4: Add Two Numbers Represented by Linked List (Leetcode 2)
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    // Output for problem 4
    ListNode* result4 = addTwoNumbers(l1, l2);
    cout << "Output for problem 4: ";
    while (result4) {
        cout << result4->val << " ";
        result4 = result4->next;
    }
    cout << endl;

    // Input for problem 5: Convert Binary Number in a Linked List to Integer (Leetcode 1290)
    ListNode* head5 = new ListNode(1);
    head5->next = new ListNode(0);
    head5->next->next = new ListNode(1);
    
    // Output for problem 5
    int result5 = getDecimalValue(head5);
    cout << "Output for problem 5: " << result5 << endl;

    // Input for problem 6: Maximum Twin Sum of a Linked List (Leetcode 2130)
    ListNode* head6 = new ListNode(5);
    head6->next = new ListNode(4);
    head6->next->next = new ListNode(2);
    head6->next->next->next = new ListNode(1);
    
    // Output for problem 6
    int result6 = maxTwinSum(head6);
    cout << "Output for problem 6: " << result6 << endl;

    // Input for problem 7: Reverse Nodes in k-Group (Leetcode 25)
    ListNode* head7 = new ListNode(1);
    head7->next = new ListNode(2);
    head7->next->next = new ListNode(3);
    head7->next->next->next = new ListNode(4);
    head7->next->next->next->next = new ListNode(5);
    
    // Output for problem 7
    ListNode* result7 = reverseKGroup(head7, 2);
    cout << "Output for problem 7: ";
    while (result7) {
        cout << result7->val << " ";
        result7 = result7->next;
    }
    cout << endl;

    return 0;
}

// Implementations of functions

ListNode* deleteDuplicates(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    
    while (head) {
        if (head->next && head->val == head->next->val) {
            while (head->next && head->val == head->next->val) {
                head = head->next;
            }
            prev->next = head->next;
        } else {
            prev = prev->next;
        }
        head = head->next;
    }
    
    return dummy.next;
}


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


ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next || !head->next->next) return head;
    
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;
    
    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    
    odd->next = evenHead;
    
    return head;
}


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    int carry = 0;
    
    while (l1 || l2 || carry) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    
    return dummy.next;
}


int getDecimalValue(ListNode* head) {
    int result = 0;
    while (head) {
        result = result * 2 + head->val;
        head = head->next;
    }
    return result;
}


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

