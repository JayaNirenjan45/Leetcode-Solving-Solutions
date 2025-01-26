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
    ListNode* insertionSortList(ListNode* head) 
    {
        ListNode* cur = head;
        vector<int>v;
        int k=0,t;
        while(cur!=NULL)
        {
            v.push_back(cur->val);
            cur=cur->next;
        }
        cur=head;
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]>v[j])
                {
                    t=v[i];
                    v[i]=v[j];
                    v[j]=t;
                }
            }
        }
        while(cur!=NULL)
        {
            cur->val=v[k++];
            cur=cur->next;
        }
        return head;
    }
};