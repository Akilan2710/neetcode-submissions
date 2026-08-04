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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* r=l3;
        int c=0,d;
        while (l1 != nullptr || l2 != nullptr || c!=0){
            d=((l1!=nullptr?l1->val:0)+(l2!=nullptr?l2->val:0)+c)%10;
            c=((l1!=nullptr?l1->val:0)+(l2!=nullptr?l2->val:0)+c)/10;
            ListNode* l4=new ListNode(d);
            l3->next=l4;
            l3=l3->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        return r->next;
    }
};
