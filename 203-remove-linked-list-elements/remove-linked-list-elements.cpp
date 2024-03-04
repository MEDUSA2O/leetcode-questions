class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return nullptr;

        // Handle the case where the first node(s) need to be removed
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};