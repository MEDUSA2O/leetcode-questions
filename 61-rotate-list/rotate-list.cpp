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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == NULL) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail -> next != NULL ){
            tail = tail -> next ;
            len++;
        }
        k = k % len;
        if( k == 0 )return head;
        ListNode* newhead;
        ListNode* curr = head;
        for(int i = 0 ; i < len - k - 1 ; i++){
            curr = curr -> next;
        }
        newhead = curr -> next;
        curr -> next = NULL;
        tail -> next = head;
        return newhead;

    }
};