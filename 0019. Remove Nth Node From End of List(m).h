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
        ListNode *f=head,*pre=NULL;
        int amount=1;
        while(f->next!=NULL){
            f=f->next;
            amount++;
        }
        f=head;
        for(int i=0;i<amount-n-1;i++)
        {
            f=f->next;
        }
        pre=f;
        f=f->next;
        if(n!=amount)
        {
            pre->next=f->next;
        }
        else if(n==amount&&n==1){
            head=NULL;
        }
        else if(n==amount&&n>1){
            head=head->next;
        }
        return head;
    }
};
