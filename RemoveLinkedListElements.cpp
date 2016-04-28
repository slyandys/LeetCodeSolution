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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;
        
        while(head != NULL && head->val == val) {
            head = head->next;
        }
        
        if (head == NULL) return head;
        
        ListNode *p = head, *q = head;
        
        while (p != NULL && p->next != NULL) {
            q = p;
            p = p->next;
            
            while (p != NULL && p->val == val) {
                p = p->next;
            }
            
            q->next = p;
        }
        
        return head;
    }
};