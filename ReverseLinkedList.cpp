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
    ListNode* reverseList(ListNode* head) {
        ListNode *p, *q, *r;
        p = head;
        
        if (p == NULL || p->next == NULL) {
            return p;
        }
        
        if (p->next != NULL) {
            q = p->next;
        }
        
        if (q->next != NULL) {
            r = q->next;
        } else {
            p->next = NULL;
            q->next = p;
            return q;
        }
        
        p->next = NULL;

        while (r != NULL) {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        
        //r = q;
        q->next = p;
        
        return q;
    }
};