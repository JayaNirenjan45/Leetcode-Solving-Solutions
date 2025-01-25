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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* cur = head;
        if(head==NULL)
         return head;
        vector<int> res ;
        while(cur!=NULL)
        {
            res.push_back(cur->val);
            cur=cur->next;
        }
        int n = res.size();
        for(int i=0;i<k%n;i++)
        {
            int l=res[n-1];
            for(int j = n-2;j>=0;j--)
            {
                res[j+1] = res[j];
            }
            res[0]=l;
        }
        cur=head;
        int i=0;
        while(cur!=NULL)
        {
            cur->val= res[i++];
            cur=cur->next;
        }
        return head;
    }
};