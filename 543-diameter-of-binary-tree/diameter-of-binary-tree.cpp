class Solution {
public:
    // Function to calculate the diameter of a binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; // Variable to store the diameter
        longestPath(root, diameter); // Call helper function to calculate the longest path
        return diameter; // Return the diameter
    }

private:
    // Helper function to calculate the longest path in a subtree and update the diameter
    int longestPath(TreeNode* node, int& diameter) {
        if (node == nullptr) return 0; // Base case: If the node is null, return 0
        
        // Recursively find the longest path in the left and right subtrees
        int leftPath = longestPath(node->left, diameter);
        int rightPath = longestPath(node->right, diameter);
        
        // Update the diameter if the sum of left and right paths is greater
        diameter = std::max(diameter, leftPath + rightPath);
        
        // Return the longest path from the current node to the leaf node
        return std::max(leftPath, rightPath) + 1;
    }
};