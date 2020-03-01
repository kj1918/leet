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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carryout=0;
        int temp;
        ListNode *f=new ListNode(0);
        ListNode *h;
        h=f;
        while(l1||l2){

            temp=(l1->val+l2->val+carryout)%10;
            carryout=(l1->val+l2->val+carryout)/10;
            f->val=temp;

            
            if(!l1->next&&!l2->next){
                break;
            }
            if(l1->next){
                l1=l1->next;
            }
            else{
                l1->next=new ListNode(0);
                l1=l1->next;
            }
            if(l2->next){
                l2=l2->next;
            }
            else{
                l2->next=new ListNode(0);
                l2=l2->next;
            }
            f->next=new ListNode(0);
            f=f->next;
        }
        if(carryout>0){
            f->next=new ListNode(carryout);
        }
        return h;
    }
};
