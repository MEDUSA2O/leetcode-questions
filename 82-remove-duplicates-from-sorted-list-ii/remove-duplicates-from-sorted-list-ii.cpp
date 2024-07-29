class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        ListNode* nh = dummy;  // Point nh to dummy initially
        
        // Count occurrences of each value
        while (head != NULL) {
            mp[head->val]++;
            head = head->next;
        }

        // Create new list with non-duplicate values
        for (auto i : mp) {
            if (i.second == 1) {
                dummy->next = new ListNode(i.first);
                dummy = dummy->next;
            }
        }

        return nh->next;  // Return the next of dummy head, which points to the new head of the list
    }
};