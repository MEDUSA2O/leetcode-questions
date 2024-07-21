class Solution {
public:
    int findDistance(TreeNode* root, int p, int q) {
        TreeNode* lca = findLCA(root, p, q);
        return getDistance(lca, p) + getDistance(lca, q);
    }

private:
    TreeNode* findLCA(TreeNode* root, int p, int q) {
        if (root == nullptr || root->val == p || root->val == q) {
            return root;
        }
        TreeNode* left = findLCA(root->left, p, q);
        TreeNode* right = findLCA(root->right, p, q);
        if (left && right) {
            return root;
        }
        return left ? left : right;
    }

    int getDistance(TreeNode* root, int target) {
        if (root == nullptr) return -1;
        if (root->val == target) return 0;

        int left = getDistance(root->left, target);
        if (left != -1) return left + 1;

        int right = getDistance(root->right, target);
        if (right != -1) return right + 1;

        return -1;
    }
};
