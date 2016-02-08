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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *p, *q, *r, *s; // p is the node of odd and q is node of even
        
        if (head == NULL || head->next == NULL || head->next->next == NULL) {
            return head;
        }
        
        // odd
        p = head;
        // even
        q = head;
        // General
        r = head->next;
        
        // head of even list
        s = r;
        q = r;
        
        r = r->next;
        int counter = 3;
          while (r != NULL) {
            if (counter % 2 == 0) {
                if (q != head) {
                    q->next = r;
                    q = r;
                } else {
                    q = r;
                    if (s == NULL) {
                        s = r;
                    }
                }
                
                if (r->next == NULL) {
                    p->next = NULL;
                }
            } else {
                if (p != head) {
                    if (r->next != NULL) {
                        p->next = r;
                        p = r;
                    } else {
                        p->next = NULL;
                        if (counter % 2 != 0){
                            p->next = r;
                            p = r;
                        }
                    }
                } else {
                    p = r;
                    head->next = p;
                }
                
                if (r->next == NULL) {
                    q->next = NULL;
                }
            }
        
            r = r->next;
            counter++;
        }

        p->next = s;
        return head;
       
    }
};