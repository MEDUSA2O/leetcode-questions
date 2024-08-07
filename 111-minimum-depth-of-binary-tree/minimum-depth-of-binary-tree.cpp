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
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 1;
        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                TreeNode* t = q.front();
                q.pop();
                if (t == NULL)
                    continue;
                if (!t->left && !t->right)
                    return depth;
                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }
            depth++;
        }
        return -1;
    }
};