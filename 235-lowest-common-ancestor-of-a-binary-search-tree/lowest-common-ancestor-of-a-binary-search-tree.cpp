/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pval = p -> val;
        int qval = q -> val;
        TreeNode* start = root;
        while( start != NULL){
            int currval = start -> val;
            if( pval > currval && qval > currval){
                start = start -> right;
            }
            else if( pval < currval && qval < currval ){
                start = start -> left;
            }
            else{
                return start;
            }
        }
        return nullptr;
        
    }
};