#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        // Maps value to TreeNode pointers
        unordered_map<int, TreeNode*> valueToNodeMap;
        // Stores values which are children in the descriptions
        unordered_set<int> childrenValues;

        // Iterate through descriptions to create nodes and set up tree structure
        for (const auto& description : descriptions) {
            // Extract parent value, child value, and whether it is a left child (1) or right child (0)
            int parentValue = description[0];
            int childValue = description[1];
            bool isLeftChild = description[2];

            // Create parent node if it doesn't already exist
            if (valueToNodeMap.count(parentValue) == 0) {
                valueToNodeMap[parentValue] = new TreeNode(parentValue);
            }

            // Create child node if it doesn't already exist
            if (valueToNodeMap.count(childValue) == 0) {
                valueToNodeMap[childValue] = new TreeNode(childValue);
            }

            // Attach child node to parent's left or right branch
            if (isLeftChild) {
                valueToNodeMap[parentValue]->left = valueToNodeMap[childValue];
            } else {
                valueToNodeMap[parentValue]->right = valueToNodeMap[childValue];
            }

            // Mark the child value as a child in the set
            childrenValues.insert(childValue);
        }

        // Find and return the root node (a node that is not a child)
        for (const auto& entry : valueToNodeMap) {
            int nodeValue = entry.first;
            TreeNode* node = entry.second;

            // If the value is not found in childrenValues set, it is the root
            if (childrenValues.find(nodeValue) == childrenValues.end()) {
                return node;
            }
        }

        // This should not occur according to the problem statement
        return nullptr;
    }
};
