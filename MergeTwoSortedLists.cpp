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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newptr, *p;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        if (ptr1 == NULL && ptr2 == NULL) {
            return ptr1;
        } else if (ptr1 != NULL && ptr2 == NULL) {
            return ptr1;
        } else if (ptr1 == NULL && ptr2 != NULL) {
            return ptr2;
        }
        
        if (ptr1->val <= ptr2->val) {
            newptr = ptr1;
            ptr1 = ptr1->next;
        } else {
            newptr = ptr2;
            ptr2 = ptr2->next;
        }
        
        p = newptr;
        
        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1->val <= ptr2->val) {
                p->next = ptr1;
                ptr1 = ptr1->next;
                p = p->next;
            } else {
                p->next = ptr2;
                ptr2 = ptr2->next;
                p = p->next;
            }
        }
        
        if (ptr1 == NULL && ptr2 != NULL) {
            p->next = ptr2;
        } else if (ptr1 != NULL && ptr2 == NULL) {
            p->next = ptr1;
        }
        
        return newptr;
    }
};