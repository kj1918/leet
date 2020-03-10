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
    ListNode* sortList(ListNode* head) {
        if(!head){
            return NULL;
        }
        vector<int> store;
        ListNode *temp;
        temp=head;
        store.push_back(temp->val);
        while(temp->next){
            temp=temp->next;
            store.push_back(temp->val);
        }
        sort(store.begin(),store.end());
        temp=head;
        int i=0;
        temp->val=store[0];
        i++;
        while(temp->next){
            temp=temp->next;
            temp->val=store[i];
            i++;
        }
        return head;
    }
};
