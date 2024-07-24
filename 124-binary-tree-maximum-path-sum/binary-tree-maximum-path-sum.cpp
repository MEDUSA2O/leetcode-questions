class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        dfs(root, res);
        return res;
    }

private:
    int dfs(TreeNode* root, int& res) {
        if (!root) return 0;
        
        int leftMax = dfs(root->left, res);
        int rightMax = dfs(root->right, res);
        
        leftMax = max(leftMax, 0);
        rightMax = max(rightMax, 0);
        
        // Compute max path sum WITH split
        res = max(res, root->val + leftMax + rightMax);
        
        // Return max path sum WITHOUT split
        return root->val + max(leftMax, rightMax);
    }
};