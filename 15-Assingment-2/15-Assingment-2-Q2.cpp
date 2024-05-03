vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        stack<pair<int, int>> stack;

        int index = 0;
        while (head) {
            while (!stack.empty() && stack.top().second < head->val) {
                result[stack.top().first] = head->val;
                stack.pop();
            }
            stack.push({index++, head->val});
            result.push_back(0);
            head = head->next;
        }

        return result;
    }