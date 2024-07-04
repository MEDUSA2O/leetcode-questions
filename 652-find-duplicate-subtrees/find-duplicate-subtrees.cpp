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
private:
    vector<pair<TreeNode*,vector<int>>> subTrees;

    void getValues(TreeNode* root, vector<int>& values){
        //if root == null, we add null to values, and we stop dfs
        if (!root){
            //because there isn't a "null" value in integers (or better say that null in integer = 0, but 0 is not actually null), so we need to push_back a value that is invalid for our trees. As we know Node.val is [-200,200], so any number outside that range can be considered as invalid number (so null);
            values.push_back(-201);
            return;
        }

        //typical dfs algo to go through every node of a tree
        //save all node.val into values
        values.push_back(root->val);
        getValues(root->left, values);
        getValues(root->right, values);
    }
    
    //typical dfs algo to go through every node of a tree
    void dfs(TreeNode* root){
        //stop dfs when root == null
        if (!root)
            return;

        vector<int> values;
        getValues(root,values);
        //save into subTrees the root and its nodes'value.
        subTrees.push_back({root, values});
        dfs(root->left);
        dfs(root->right);
    }


public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        /*
        get all subtrees with their respective values
        e.g. root = [2,1,1] 
        subTrees = {
            {pointer of root (so, root->val 2), [2,1,1]}
            {pointer of root->left (so, root->val 1), [1,null,null]}
            {pointer of root->right (so, root->val 1), [1,null,null]}
        }
        */
        dfs(root);

        vector<TreeNode*> res;
        //this set is used to make sure that we don't add duplicate trees mulitple times.
        //e.g. we have 3 trees that have the same structure with same node values. We need to take only once, not twice
        set<vector<int>> visited;

        for (int i = 0; i < subTrees.size(); i++)
            for (int j = i + 1; j < subTrees.size(); j++)
                //if subTrees[i]'s nodes values are equal to subTrees[j]'s nodes value AND we've never met this duplicate of tree
                if (subTrees[i].second == subTrees[j].second && visited.find(subTrees[i].second) == visited.end()){
                    //add it into res
                    res.push_back(subTrees[i].first);
                    //add this duplicate of tree into set, so that we know which duplicate trees we met
                    visited.insert(subTrees[i].second);
                    break;
                }

        return res;
    }
};