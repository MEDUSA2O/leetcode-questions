

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        int depth = 1;
        while (!q.empty()) {
            int qSize = q.size();
            while (qSize--) {
                TreeNode* node = q.front();
                q.pop();
                if (!node) {
                    continue;
                }
                if (!node->left && !node->right) {
                    return depth;
                }
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            depth++;
        }
        return -1; // Should not reach here if the tree is valid
    }
};
