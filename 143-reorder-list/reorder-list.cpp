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
    void reorderList(ListNode* head) {
        if (head == nullptr) return;

        // Find the middle of linked list
        ListNode *slow = head, *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second part of the list
        ListNode *prev = nullptr, *curr = slow, *tmp;
        while (curr != nullptr) {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }

        // Merge two sorted linked lists
        ListNode *first = head, *second = prev;
        while (second->next != nullptr) {
            tmp = first->next;
            first->next = second;
            first = tmp;

            tmp = second->next;
            second->next = first;
            second = tmp;
        }
        
    }
};