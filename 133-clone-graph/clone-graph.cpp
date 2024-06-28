/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> map;
    Node* cloneGraph(Node* node) {

        if (!node)
            return node;
        Node* newNode = new Node(node->val);
        map[node] = newNode;
        for (Node* neighbor : node->neighbors) {
            if (map.contains(neighbor))
                newNode->neighbors.push_back(map[neighbor]);
            else
                newNode->neighbors.push_back(cloneGraph(neighbor));
        }
        return newNode;
    }
};