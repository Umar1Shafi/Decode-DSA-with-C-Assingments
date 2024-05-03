vector<int> finalPrices(vector<int>& prices) {
        vector<int> discounts(prices.size(), 0);
        stack<int> stack;

        for (int i = 0; i < prices.size(); ++i) {
            while (!stack.empty() && prices[stack.top()] >= prices[i]) {
                discounts[stack.top()] = prices[stack.top()] - prices[i];
                stack.pop();
            }
            stack.push(i);
        }

        for (int i = 0; i < stack.size(); ++i) {
            discounts[stack.top()] = prices[stack.top()];
            stack.pop();
        }

        for (int i = 0; i < prices.size(); ++i) {
            prices[i] -= discounts[i];
        }

        return prices;
    }