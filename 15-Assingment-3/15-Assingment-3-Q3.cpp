int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> heights(m, vector<int>(n, 0));
        int maxArea = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == '1') {
                    heights[i][j] = (i == 0 ? 1 : heights[i - 1][j] + 1);
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            stack<int> stack;
            vector<int> left(n), right(n, n);

            for (int j = 0; j < n; ++j) {
                while (!stack.empty() && heights[i][stack.top()] >= heights[i][j]) {
                    right[stack.top()] = j;
                    stack.pop();
                }
                left[j] = (stack.empty() ? -1 : stack.top());
                stack.push(j);
            }

            for (int j = 0; j < n; ++j) {
                maxArea = max(maxArea, heights[i][j] * (right[j] - left[j] - 1));
            }
        }

        return maxArea;
    }