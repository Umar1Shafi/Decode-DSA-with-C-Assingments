#include <iostream>
#include <climits>

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
    int findMin(TreeNode* root) {
        if (root == nullptr) return INT_MAX;
        int leftMin = findMin(root->left);
        int rightMin = findMin(root->right);
        return min(root->val, min(leftMin, rightMin));
    }
};

int main() {
    // Example binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout << "Minimum value in the binary tree: " << sol.findMin(root) << endl;

    // Clean up memory
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
