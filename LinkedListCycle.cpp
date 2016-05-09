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
    bool hasCycle(ListNode *head) {
        ListNode *p, *q;
        
        if (head == NULL || head->next == NULL) return false;
        
        p = head;
        q = head;
        
        while(p->next != NULL && q->next != NULL && q->next->next != NULL) {
            p = p->next;
            q = q->next->next;
            if (p == q) {
                return true;
            }
        }
        
        if (p == q && p != head){
            return true;
        } else {
            return false;
        }
        
        
    }
};