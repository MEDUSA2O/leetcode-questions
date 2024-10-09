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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()) {
            TreeNode* t = s.top();
            s.pop();
            if (t->left != NULL) {
                s.push(t->left);
                if (!t->left->left && !t->left->right) {
                    ans += t->left->val; 
                }
            }
            if (t->right != NULL) {
                s.push(t->right);
            }
        }
        return ans;
    }
};