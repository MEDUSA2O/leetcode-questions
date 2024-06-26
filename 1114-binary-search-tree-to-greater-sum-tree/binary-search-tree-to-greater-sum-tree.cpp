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
    TreeNode* bstToGst(TreeNode* root) {
        if (!root)
            return nullptr;

        std::vector<int> arr1;
        std::queue<TreeNode*> q;

        q.push(root);
        while (!q.empty()) {
            TreeNode* p = q.front();
            q.pop();
            arr1.push_back(p->val);

            if (p->left != nullptr)
                q.push(p->left);

            if (p->right != nullptr)
                q.push(p->right);
        }

        std::sort(arr1.begin(), arr1.end());

        std::vector<int> arr2(arr1.size());
        int ans = std::accumulate(arr1.begin(), arr1.end(), 0);
        arr2[0] = ans;
        for (size_t i = 1; i < arr1.size(); ++i) {
            arr2[i] = arr2[i - 1] - arr1[i - 1];
        }

        std::unordered_map<int, int> mp;
        for (size_t i = 0; i < arr1.size(); ++i) {
            mp[arr1[i]] = arr2[i];
        }

        q.push(root);
        while (!q.empty()) {
            TreeNode* p = q.front();
            q.pop();
            p->val = mp[p->val];

            if (p->left != nullptr)
                q.push(p->left);

            if (p->right != nullptr)
                q.push(p->right);
        }

        return root;
    }
};