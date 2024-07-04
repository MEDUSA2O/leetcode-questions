static const int __ = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* x = head->next;
        int sum = 0;
        vector<int> ans;

        while (x != nullptr) {
            if (x->val != 0) {
                sum += x->val;
            } else {
                if (sum != 0) {
                    ans.push_back(sum);
                    sum = 0;
                }
            }
            x = x->next;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        for (int val : ans) {
            current->next = new ListNode(val);
            current = current->next;
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
