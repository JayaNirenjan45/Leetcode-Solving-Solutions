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
        for(int i=1;i<v.size();i++)
        {
            int key = v[i];
            int j = i-1;
            while(j>=0 && v[j]>key)
            {
                v[j+1] = v[j];
                j--;
            }
            v[j+1]=key;
        }
        while(cur!=NULL)
        {
            cur->val=v[k++];
            cur=cur->next;
        }
        return head;
    }
};