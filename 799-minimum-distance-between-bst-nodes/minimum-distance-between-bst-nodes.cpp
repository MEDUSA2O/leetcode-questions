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
vector<int>ans;
void dfs(TreeNode* node){
    if(node == NULL )return ;
    ans.push_back(node -> val);
    dfs(node -> left);
    dfs(node -> right);
}
    int minDiffInBST(TreeNode* root) {
        dfs(root);
        sort(ans.begin() , ans.end());
        int mindiff = INT_MAX;
        for(int i =1 ; i < ans.size() ; i++){
            mindiff = min(mindiff , ans[i] - ans[i-1]);
        }

        return mindiff;
    }
};