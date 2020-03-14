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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        vector<int> restore;
        ListNode *now=head,*start;
        for(int i=1;i<m;i++){
            now=now->next;
        }
        start=now;
        for(int i=m;i<=n;i++){
            restore.push_back(now->val);
            now=now->next;
        }
        int k=restore.size()-1;
        for(int i=m;i<=n;i++){
            start->val=restore[k];
            k--;
            start=start->next;
        }
        return head;
    }
};
