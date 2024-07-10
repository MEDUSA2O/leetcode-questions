/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* flipBinaryTree(Node* root, Node * leaf) {
        // starting from the leaf
        Node *curr = leaf, *prev = NULL, *par = NULL;

        // up to the root
        while (prev != root) {

            // excluding the root
            if (curr != root) {

                // if cur has a left child, then that child becomes cur's right child
                if (curr -> left) {
                    curr -> right = curr -> left;
                    curr -> left = NULL;
                }
                
                // cur's original parent becomes cur's left child
                par = curr -> parent;
                curr -> left = par;

                // original parent's pointer to cur becomes null
                if (par -> left == curr) par -> left = NULL;
                if (par -> right == curr) par -> right = NULL;
            }

            // sets the Node.parent pointers correctly
            curr -> parent = prev;

            prev = curr;
            curr = par;
        }
        return leaf;
    }
};