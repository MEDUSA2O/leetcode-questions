/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> result;
        getAllNodes(root, result);

        // Check if k is valid
        if (k >= 1 && k <= result.size()) {
            return result[k - 1];
        }

        // Handle invalid k
        return -1; // or any suitable value indicating invalid k
    }

private:
    void getAllNodes(TreeNode* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }

        // Recursively traverse the left and right subtrees
        getAllNodes(root->left, result);

        // Process the current node
        result.push_back(root->val);

        getAllNodes(root->right, result);
    }
};