/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) 
{
    struct ListNode* current = head, *dp;
    int l=0,i=0;
    while(current!=NULL)
    {
        l++;
        current=current->next;
    }  
    current = head;
    if(l==1)
    {
        return head->next;
    }
    if(l==2)
    {
        free(head->next);
        head->next=NULL;
        return head;
    }
    l=(l/2);
    for(int i=0;i<l-1;i++)
    {
        current=current->next;
    }
    printf("%d",current->val);
    dp= current->next;
    current->next=current->next->next;
    free(dp);
    return head;      
}