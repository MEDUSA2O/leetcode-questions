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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodetovalue;
        unordered_set<int> childnode;
        for (auto i : descriptions) {
            int parent = i[0];
            int child = i[1];
            bool leftornot = i[2];
            if (nodetovalue.count(parent) == 0) {
                nodetovalue[parent] = new TreeNode(parent);
            }
            if (nodetovalue.count(child) == 0) {
                nodetovalue[child] = new TreeNode(child);
            }
            if (leftornot) {
                nodetovalue[parent]->left = nodetovalue[child];
            } else {
                nodetovalue[parent]->right = nodetovalue[child];
            }
            childnode.insert(child);
        }
        for (auto j : nodetovalue) {
            int node_val = j.first;
            TreeNode* node_child = j.second;
            if (childnode.find(node_val) == childnode.end()) {
                return node_child;
            }
        }
        return NULL;
    }
};