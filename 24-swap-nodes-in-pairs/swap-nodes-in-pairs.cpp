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
    ListNode* swapPairs(ListNode* head) {
       
        if (!head || !head->next) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (head && head->next) {
            ListNode* second = head->next;
            head->next = second->next;
            second->next = head;
            prev->next = second;

            prev = head;
            head = head->next;
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};