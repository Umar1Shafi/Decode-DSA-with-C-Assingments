#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* deleteMiddleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = slow->next;
        delete slow;
        
        return head;
    }

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

    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        
        for (int i = 0; i < k; ++i) {
            fast = fast->next;
        }
        
        ListNode* first = fast;
        
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* second = slow;
        
        swap(first->val, second->val);
        
        return dummy->next;
    }

    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* prev = dummy;
        ListNode* current = head;
        
        while (current != nullptr) {
            if (current->val == val) {
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
            }
        }
        
        return dummy->next;
    }

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
};

void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example for Leetcode 2095: Delete Middle Node
    cout << "Example for Leetcode 2095: Delete Middle Node" << endl;
    vector<int> values1 = {1, 3, 4, 7, 1, 2, 6};
    ListNode* head1 = new ListNode(values1[0]);
    ListNode* current1 = head1;
    for (int i = 1; i < values1.size(); ++i) {
        current1->next = new ListNode(values1[i]);
        current1 = current1->next;
    }
    Solution sol1;
    ListNode* result1 = sol1.deleteMiddleNode(head1);
    printLinkedList(result1);

    // Example for Leetcode 1669: Merge In Between Linked Lists
    cout << "\nExample for Leetcode 1669: Merge In Between Linked Lists" << endl;
    vector<int> values2 = {0, 1, 2, 3, 4, 5};
    ListNode* head2 = new ListNode(values2[0]);
    ListNode* current2 = head2;
    for (int i = 1; i < values2.size(); ++i) {
        current2->next = new ListNode(values2[i]);
        current2 = current2->next;
    }
    vector<int> values3 = {1000000, 1000001, 1000002};
    ListNode* list2 = new ListNode(values3[0]);
    ListNode* current3 = list2;
    for (int i = 1; i < values3.size(); ++i) {
        current3->next = new ListNode(values3[i]);
        current3 = current3->next;
    }
    ListNode* result2 = sol1.mergeInBetween(head2, 3, 4, list2);
    printLinkedList(result2);

    // Example for Leetcode 1721: Swap Nodes in Pairs
    cout << "\nExample for Leetcode 1721: Swap Nodes in Pairs" << endl;
    vector<int> values4 = {1, 2, 3, 4, 5};
    ListNode* head3 = new ListNode(values4[0]);
    ListNode* current4 = head3;
    for (int i = 1; i < values4.size(); ++i) {
        current4->next = new ListNode(values4[i]);
        current4 = current4->next;
    }
    ListNode* result3 = sol1.swapNodes(head3, 2);
    printLinkedList(result3);

    // Example for Removing Elements from Linked List
    cout << "\nExample for Removing Elements from Linked List" << endl;
    vector<int> values5 = {1, 2, 6, 3, 4, 5, 6};
    ListNode* head4 = new ListNode(values5[0]);
    ListNode* current5 = head4;
    for (int i = 1; i < values5.size(); ++i) {
        current5->next = new ListNode(values5[i]);
        current5 = current5->next;
    }
    ListNode* result4 = sol1.removeElements(head4, 6);
    printLinkedList(result4);

    return 0;
}
