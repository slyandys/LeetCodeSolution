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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p = head;
        int tmp = 0;
        
        if (p == NULL || p->next == NULL) return head;
        
        while (p->next != NULL && p->next->next != NULL) {
            tmp = p->next->val;
            p->next->val = p->val;
            p->val = tmp;
            p = p->next->next;
        }
        
        if (p->next != NULL) {
            tmp = p->next->val;
            p->next->val = p->val;
            p->val = tmp;
        }
        
        return head;
    }
};