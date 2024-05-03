ListNode* deleteNodes(ListNode* head) {
        stack<int> stack;
        ListNode* current = head;

        while (current) {
            while (!stack.empty() && stack.top() < current->val) {
                stack.pop();
            }
            stack.push(current->val);
            current = current->next;
        }

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        current = head;

        while (current) {
            if (stack.top() > current->val) {
                prev->next = current->next;
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
                stack.pop();
            }
        }

        return dummy.next;
    }