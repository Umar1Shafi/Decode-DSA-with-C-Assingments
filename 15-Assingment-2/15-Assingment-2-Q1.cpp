bool isValid(string s) {
        stack<char> brackets;
        unordered_map<char, char> mappings = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char bracket : s) {
            if (mappings.find(bracket) != mappings.end()) {
                if (brackets.empty() || brackets.top() != mappings[bracket])
                    return false;
                brackets.pop();
            } else {
                brackets.push(bracket);
            }
        }

        return brackets.empty();
    }