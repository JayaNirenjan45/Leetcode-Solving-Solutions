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
    ListNode* removeElements(ListNode* head, int val) 
    {
        vector<int> v;
        ListNode* cur = head, *prev = NULL;
        while(cur != NULL)
        {
            if(cur->val!=val)
             v.push_back(cur->val);
            cur = cur->next;
        }   
        cur = head;
        if(v.size()==0)
         return NULL;
        for(int i=0;i<v.size();i++)
        {
            cur->val=v[i];
            prev=cur;
            cur=cur->next;
        }
        prev->next=NULL;
        return head;
    }
};