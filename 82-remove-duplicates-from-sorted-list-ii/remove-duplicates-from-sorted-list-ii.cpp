class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mp;
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        ListNode* nh = dummy;  
        
       
        while (head != NULL) {
            mp[head->val]++;
            head = head->next;
        }

        
        for (auto i : mp) {
            if (i.second == 1) {
                dummy->next = new ListNode(i.first);
                dummy = dummy->next;
            }
        }

        return nh->next;  
    }
};