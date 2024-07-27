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
    int countNodes(TreeNode* root) {
        // return root != NULL ? 1+countNodes(root->right)+countNodes(root->left) : 0;
        if( root == NULL )return 0;
        queue<TreeNode*>q;
        int res = 0;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* t = q.front();
                res++;
                q.pop();
                if( t-> left){
                    q.push(t -> left);
                }
                 if( t-> right){
                    q.push(t -> right);
                }

            }
        }
        return res;
    }
};