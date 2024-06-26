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
    TreeNode* maketree(vector<int> a,int start,int end){
        if (start > end)
        return NULL;
        int mid = (start + end )/2;
        TreeNode* root = new TreeNode(a[mid]);
        root ->left =  maketree(a, start, mid - 1);
        root ->right =  maketree(a, mid + 1, end);
        return root;

    }

    TreeNode* balanceBST(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>arr;
        q.push(root);
        while(q.empty() == false){
            TreeNode* p = q.front();
            q.pop();
            arr.push_back(p->val);
            if(p->left != NULL){
                q.push(p->left);
            }
            if(p->right != NULL){
                q.push(p->right);
            }
        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        return maketree(arr, 0, n-1);

        
    }
};