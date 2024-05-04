#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // for reverse

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderRightToLeft(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node->val);
                if (node->right) q.push(node->right); // Push right child first
                if (node->left) q.push(node->left);
            }
            result.push_back(currentLevel);
        }
        
        reverse(result.begin(), result.end()); // Reverse the result vector
        
        return result;
    }
};
