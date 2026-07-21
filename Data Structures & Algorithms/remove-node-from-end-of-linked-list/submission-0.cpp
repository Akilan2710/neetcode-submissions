/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head,*c=head;
        for(int i=0;i<n;i++){
            c=c->next;
        }
        if(!c){
            return head->next;
        }
        while(c->next){
            c=c->next;
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};
