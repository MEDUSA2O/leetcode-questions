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
    string gameResult(ListNode* head) {
        int oddsum = 0 ;
        int evensum = 0 ;
        ListNode* even = head ;
        while( even != NULL ){
            ListNode* odd = even -> next ;
            if( even -> val > odd -> val) evensum++;
            else  oddsum++;
            even = odd -> next;

        }
        if( evensum > oddsum )return "Even";
        else if ( oddsum > evensum )return "Odd";
        else{
            return "Tie";
        }

        
    }
};