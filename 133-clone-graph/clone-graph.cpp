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
unordered_map<Node*,Node*>visit;
    Node* cloneGraph(Node* node) {
        if(node == NULL )return NULL;
        if(visit.find(node) != visit.end()){
            return visit[node];
        }
        Node* clonenode = new Node(node->val);
        visit[node] = clonenode;
        for(Node* fr : node -> neighbors){
            clonenode->neighbors.push_back(cloneGraph(fr));
        }
        return clonenode;
        
    }
};