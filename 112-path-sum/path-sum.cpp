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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        stack<TreeNode*>node;
        stack<int>remainingsumstack;
        node.push(root);
        remainingsumstack.push(targetSum - root -> val);
        while(node.empty() == false){
            TreeNode* abv = node.top();
            node.pop();
            int remainingsum = remainingsumstack.top();
            remainingsumstack.pop();
            if(remainingsum == 0 && abv -> left == NULL && abv -> right == NULL ){
                return true;
            }
            if(abv -> left != NULL ){
                remainingsumstack.push(remainingsum - abv -> left -> val);
                node.push(abv -> left);
            }
            if( abv -> right != NULL ){
                remainingsumstack.push(remainingsum - abv -> right -> val);
                node.push(abv -> right);
            }
        }
        return false;

    }
};