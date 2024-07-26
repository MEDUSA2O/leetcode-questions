class Solution {

private:
    Node* first = nullptr;
    Node* last = nullptr;

    void helper(Node* node) {
        if (node) {
            // Traverse the left subtree
            helper(node->left);

            // Link the previous node (last) with the current one (node)
            if (last) {
                last->right = node;
                node->left = last;
            } else {
                // If this is the smallest node, initialize the first node
                first = node;
            }

            // Mark the current node as the last one
            last = node;

            // Traverse the right subtree
            helper(node->right);
        }
    }

public:
    Node* treeToDoublyList(Node* root) {
        if (!root) return nullptr;

        // Perform the inorder traversal to build the doubly linked list
        helper(root);

        // Close the circular doubly linked list
        last->right = first;
        first->left = last;

        return first;
    }
};
  