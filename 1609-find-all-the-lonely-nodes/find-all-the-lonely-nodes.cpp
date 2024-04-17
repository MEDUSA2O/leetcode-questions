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
    void DFS(TreeNode* root, bool islonely, vector<int>& ans) {
        if (root == NULL)
            return;
        if (islonely) {
            ans.push_back(root->val);
        }
        DFS(root->left, root->right == NULL, ans);
        DFS(root->right, root->left == NULL, ans);
    }
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> ans;
        DFS(root, false, ans);
        return ans;
    }
};