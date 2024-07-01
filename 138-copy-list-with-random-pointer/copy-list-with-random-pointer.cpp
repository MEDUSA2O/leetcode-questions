/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;

        // Create a mapping from original nodes to their corresponding copied
        // nodes
        unordered_map<Node*, Node*> oldToCopy;
        Node* cur = head;

        // First pass: Create all new nodes and store in the map
        while (cur) {
            oldToCopy[cur] = new Node(cur->val);
            cur = cur->next;
        }

        // Second pass: Set next and random pointers
        cur = head;
        while (cur) {
            oldToCopy[cur]->next = oldToCopy[cur->next];
            oldToCopy[cur]->random = oldToCopy[cur->random];
            cur = cur->next;
        }

        // Return the head of the copied list
        return oldToCopy[head];
    }
};