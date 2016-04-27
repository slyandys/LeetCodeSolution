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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *end = head;
        
        int count = 0;
        if (head == NULL) {
            return head;
        }
        
        if (head->next == NULL){
            return NULL;
        }
        
        while(end->next != NULL) {
            end = end->next;
            ++count;
        }
        count += 1;
        ListNode *p = head;
        int i;
        
        for(i = 0; i < count - n - 1; ++i){
            p = p->next;
        }
        
        if (p == head && count - n == 0){
            head = head->next;
        } else {
            p->next = p->next->next;
        }
        
        return head;
    }
};