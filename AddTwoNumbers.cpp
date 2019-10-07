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
        ListNode* head = new ListNode(-1);
        head->next = NULL;
        ListNode* l3;
        ListNode* l4;
        l4 = head;
        int adv = 0;
        int sum = 0;
        
        while(l1 != NULL || l2 != NULL)
        {
            if (l1 == NULL && l2 != NULL) {
                sum = l2->val + adv;
            } else if (l1 != NULL && l2 == NULL) {
                sum = l1->val + adv;
            } else {
                sum = l1->val + l2->val + adv;
            }

            if (sum > 9) {
                adv = 1;
                sum -= 10;
            } else {
                adv = 0;
            }

            l3 = new ListNode(sum);
            l4->next = l3;
            l4 = l3;

            l1 = (l1 != NULL? l1->next : NULL);
            l2 = (l2 != NULL? l2->next : NULL);
        }
        
        if (adv) {
            l3 = new ListNode(1);
            l4->next = l3;
            l4 = l3;
        }
        return head->next;
    }
};