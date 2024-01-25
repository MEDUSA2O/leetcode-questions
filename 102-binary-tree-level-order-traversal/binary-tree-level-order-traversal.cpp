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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == NULL) return ans;
         q.push(root);
        while(!q.empty()){
            vector<int>vall;
            int n = q.size();
           
            for(int i = 0 ; i < n ; i++){
                TreeNode* num = q.front();
                q.pop();
                if(num -> left != NULL) q.push(num->left);
                if(num -> right != NULL) q.push(num->right);
                vall.push_back(num -> val);

            }
            ans.push_back(vall);
        }
        return ans;

        
    }
};