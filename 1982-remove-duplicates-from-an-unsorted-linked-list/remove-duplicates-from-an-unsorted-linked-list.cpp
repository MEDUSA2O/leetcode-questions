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
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        unordered_map<int, int> mp;
        ListNode* temp = head;

        while (temp != NULL) {
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        // Iterate through the list again and add only unique elements to the
        // new list
        temp = head;
        while (temp != nullptr) {
            if (mp[temp->val] == 1) {
                current->next = new ListNode(temp->val);
                current = current->next;
            }
            temp = temp->next;
        }

        ListNode* result = dummy->next;
        delete dummy; // Clean up the dummy node
        return result;
    }
};