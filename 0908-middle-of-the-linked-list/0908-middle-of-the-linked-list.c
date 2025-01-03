/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode* n1=head;
    struct ListNode* n2=head;
    if(head==NULL)
     return head;
    else{
        while(n2 !=NULL && n2->next!=NULL)
        {
            n2=n2->next->next;
            n1=n1->next;
        }
        return n1;
    }
}