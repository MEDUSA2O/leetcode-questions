class Solution {
public:
    ListNode* frequenciesOfElements(ListNode* head) {
        unordered_map<int, int> mp;
        ListNode* temp = head;
        // Correctly traverse the entire linked list
        while (temp != nullptr) {
            mp[temp->val]++;
            temp = temp->next;
        }

        // Dummy node to ease list construction
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        // Iterate through the map to create new nodes for each frequency
        for (auto [num, freq] : mp) {
            current->next = new ListNode(freq);
            current = current->next;
        }

        // The actual head of the frequency list is next to dummy
        ListNode* ans = dummy->next;
        delete dummy; // Clean up dummy node
        return ans;
    }
};
