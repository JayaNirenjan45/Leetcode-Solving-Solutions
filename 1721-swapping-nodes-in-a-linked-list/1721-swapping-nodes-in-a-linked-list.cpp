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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int t,i=1,n=0;
        ListNode* cur = head,*f,*l;
        while(cur!=NULL)
        {
            n++;
            cur=cur->next;
        }
        cur=head;
        while(cur!=NULL)
        {
            if(i==k)
             f=cur;
            if(i==n-k+1)
             l=cur;
            i++;
            cur=cur->next;
        }
        t=f->val;
        f->val=l->val;
        l->val=t;
        return head;
    }
};