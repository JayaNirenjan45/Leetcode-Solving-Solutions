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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* cur =  head;
        vector<int> v;
        int t;
        while(cur!=NULL)
        {
            v.push_back(cur->val);
            cur=cur->next;
        }
        for(int i=0;i<v.size();i+=2)
        {
            if(i+1<v.size()){
            t=v[i];
            v[i]=v[i+1];
            v[i+1]=t;
            }
        }
        cur=head;
        int i=0;
        while(cur!=NULL)
        {
            cur->val=v[i++];
            cur=cur->next;
        }
        return head;
    }
};