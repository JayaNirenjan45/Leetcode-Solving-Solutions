/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode* current = head, *dp;
    int l=0,i=0;
    while(current!=NULL)
    {
        l++;
        current=current->next;
    }  
    current = head;
    l=l-n-1;
    if(l==-1)
    {
        head=head->next;
        free(current);
        return head;
    }
    for(int i=0;i<l;i++)
    {
        current=current->next;
    }
    dp= current->next;
    current->next=current->next->next;
    free(dp);
    return head;
}