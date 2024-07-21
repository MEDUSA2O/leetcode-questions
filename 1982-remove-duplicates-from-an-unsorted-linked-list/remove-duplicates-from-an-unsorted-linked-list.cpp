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
        ListNode* curr = dummy;
        temp = head;
        while(temp != NULL){
            if(mp[temp -> val] == 1){
                curr -> next = new ListNode( temp -> val );
                curr = curr -> next;
            }
            temp = temp -> next;
        }
        ListNode* result = dummy -> next ;
        delete dummy;
        return result; 
       
    }
};