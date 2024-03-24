/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    long countNode(TreeNode* root) {
        if (root == NULL)
            return 0;
        long left = countNode(root->left);
        long right = countNode(root->right);
        if (root->val == left + right)
            count++;
        return left + right + root->val;
    }

public:
    int equalToDescendants(TreeNode* root) {
        countNode(root);
        return count;
    }
};