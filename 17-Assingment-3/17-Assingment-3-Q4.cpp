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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        unordered_map<int, int> postMap;
        for (int i = 0; i < post.size(); ++i) {
            postMap[post[i]] = i;
        }
        return constructFromPrePostHelper(pre, post, 0, pre.size() - 1, 0, post.size() - 1, postMap);
    }
    
    TreeNode* constructFromPrePostHelper(vector<int>& pre, vector<int>& post, int preStart, int preEnd, int postStart, int postEnd, unordered_map<int, int>& postMap) {
        if (preStart > preEnd || postStart > postEnd) return nullptr;
        
        int rootVal = pre[preStart];
        TreeNode* root = new TreeNode(rootVal);
        
        if (preStart == preEnd) return root;
        
        int leftRootVal = pre[preStart + 1];
        int leftRootIndexPost = postMap[leftRootVal];
        
        int leftSubtreeSize = leftRootIndexPost - postStart + 1;
        
        root->left = constructFromPrePostHelper(pre, post, preStart + 1, preStart + leftSubtreeSize, postStart, leftRootIndexPost, postMap);
        root->right = constructFromPrePostHelper(pre, post, preStart + leftSubtreeSize + 1, preEnd, leftRootIndexPost + 1, postEnd - 1, postMap);
        
        return root;
    }
};
