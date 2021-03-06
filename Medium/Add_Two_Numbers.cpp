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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* result = new ListNode(0);
        ListNode* tail;
        tail=result;
        
        while(l1 || l2 || carry){
            carry += (l1 ? l1->val : 0)+(l2 ? l2->val : 0);
            
            tail->next = new ListNode(carry%10);
            tail=tail->next;
            carry/=10;
            
            l1=l1? l1->next : 0;
            l2=l2? l2->next :0;
        }
        return result->next;
    }
};
