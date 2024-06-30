/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root)
            return root;

        std::queue<Node*> q;
        q.push(root);
        q.push(NULL); // NULL marks the end of the first level

        while (!q.empty()) {
            Node* node = q.front();
            q.pop();

            if (node == NULL) {
                // End of current level
                if (!q.empty()) {
                    // If there are more nodes to process, add a NULL marker for
                    // the next level
                    q.push(NULL);
                }
            } else {
                // Connect the current node to the next node in the queue
                node->next = q.front();

                // Add children to the queue
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }

        return root;
    }
};