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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        if(root == NULL){
            return paths;
        }
        stack<TreeNode*>ns;
        stack<string>ps;
        ns.push(root);
        ps.push(to_string(root -> val));
        while(!ns.empty()){
            TreeNode* n = ns.top();
            string p = ps.top();
            ns.pop();
            ps.pop();
            if(n -> left == NULL && n -> right == NULL){
                paths.push_back(p);
            }
            if(n -> left){
                ns.push(n -> left);
                ps.push(p + "->" + to_string(n->left->val));

            }
            if(n -> right){
                ns.push(n -> right);
                ps.push(p + "->" + to_string(n->right->val));

            }



        }
        return paths;
        
    }
};