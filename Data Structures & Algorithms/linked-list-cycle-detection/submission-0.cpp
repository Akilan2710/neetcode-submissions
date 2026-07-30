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
    bool hasCycle(ListNode* head) {
        if(!head || !head->next){
            return false;
        }
        ListNode *p=head->next,*q=head->next->next;
        while(p->next && q->next && q->next->next){
            if(p==q){
                return true;
            }
            p=p->next;
            q=q->next->next;
        }
        return false;
    }
};
