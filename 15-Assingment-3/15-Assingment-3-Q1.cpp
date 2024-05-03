int calPoints(vector<string>& ops) {
        stack<int> scores;
        int sum = 0;

        for (string op : ops) {
            if (op == "+") {
                int prev1 = scores.top();
                scores.pop();
                int prev2 = scores.top();
                scores.push(prev1);
                scores.push(prev1 + prev2);
            } else if (op == "D") {
                scores.push(scores.top() * 2);
            } else if (op == "C") {
                sum -= scores.top();
                scores.pop();
            } else {
                scores.push(stoi(op));
            }
        }

        while (!scores.empty()) {
            sum += scores.top();
            scores.pop();
        }

        return sum;
    }