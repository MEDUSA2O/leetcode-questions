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

private:
    vector<vector<int>> ans;

    int getheight(TreeNode* root) {
        if (root == NULL)
            return 0;
        int left = getheight(root->left);
        int right = getheight(root->right);
        int currHeight = max(left, right) + 1;
        if (ans.size() < currHeight) {
            ans.resize(currHeight);
        }

        ans[currHeight - 1].push_back(root->val);

        return currHeight;
    }

public:
    vector<vector<int>> findLeaves(TreeNode* root) {
        ans.clear();
        getheight(root);
        return this->ans;
    }
};