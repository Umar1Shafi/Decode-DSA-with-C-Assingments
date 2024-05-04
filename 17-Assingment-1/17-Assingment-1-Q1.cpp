#include <iostream>

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
    int findProduct(TreeNode* root) {
        if (root == nullptr) return 1;
        int product = root->val;
        product *= findProduct(root->left);
        product *= findProduct(root->right);
        return product;
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
    cout << "Product of all values in the binary tree: " << sol.findProduct(root) << endl;

    // Clean up memory
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
