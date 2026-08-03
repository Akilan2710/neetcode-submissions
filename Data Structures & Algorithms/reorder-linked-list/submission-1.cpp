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
    void reorderList(ListNode* head) {
        ListNode *p=head,*q=head->next;
        while( q && q->next){
            p=p->next;
            q=q->next->next;
        }
        ListNode *second=p->next;
        ListNode *tail = p->next = nullptr;
        while(second){
            ListNode *t=second->next;
            second->next=tail;
            tail=second;
            second=t;
        }
        ListNode* first = head;
        second=tail;
        while(second){
            ListNode *t1=first->next,*t2=second->next;
            first->next=second;
            second->next=t1;
            first=t1;
            second=t2;
        }
    }
};
