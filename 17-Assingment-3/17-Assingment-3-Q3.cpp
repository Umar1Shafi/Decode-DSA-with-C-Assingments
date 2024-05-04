#include <iostream>
#include <vector>
#include <unordered_map>

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorderMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, inorderMap);
    }
    
    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd, unordered_map<int, int>& inorderMap) {
        if (inStart > inEnd || postStart > postEnd) return nullptr;
        
        int rootVal = postorder[postEnd];
        TreeNode* root = new TreeNode(rootVal);
        
        int rootIndexInorder = inorderMap[rootVal];
        int leftSubtreeSize = rootIndexInorder - inStart;
        
        root->left = buildTreeHelper(inorder, postorder, inStart, rootIndexInorder - 1, postStart, postStart + leftSubtreeSize - 1, inorderMap);
        root->right = buildTreeHelper(inorder, postorder, rootIndexInorder + 1, inEnd, postStart + leftSubtreeSize, postEnd - 1, inorderMap);
        
        return root;
    }
};
