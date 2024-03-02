/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr)
            return nullptr;
        ListNode* curr = head;
        int count = 0;
        while (curr != NULL) {
            count++;
            curr = curr->next;
        }
        int mid = count / 2;
        ListNode* n = head;
        for (int i = 0; i < mid - 1; i++) {
            n = n->next;
        }
        n->next = n->next->next;
        return head;
    }
};