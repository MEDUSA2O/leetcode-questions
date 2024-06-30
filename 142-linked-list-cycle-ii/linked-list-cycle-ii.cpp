/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>mp;
        ListNode* n = head;
        while( n != NULL){
            if(mp.find(n) != mp.end()){
                return n;
            }
            else{
                mp.insert(n);
                n = n->next;
            }

        }
        return NULL;
        

        
    }
};