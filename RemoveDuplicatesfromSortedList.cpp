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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p, *q, *r, *s;
        p = head;
        q = head;
        if (q == NULL || q->next == NULL) {
            return head;
        } else {
            while (q->next != NULL) {
                q = q->next;
                r = q;
                if (q->val == p->val) {
                    while (q->val == p->val && q->next != NULL) {
                        q = q->next;
                    }
                    
                    p->next = q;
                    
                    // Delete duplicate nodes
                    while (r->next != q->next) {
                        s = r->next;
                        delete r;
                        r = s;
                    }
                
                    if (p->next->next == NULL && p->val == q->val) {
                        p->next = NULL;
                        delete q;
                    }
                    p = q;
                } else {
                    p = q;
                }
            }
        }
        
        return head;
    }
};