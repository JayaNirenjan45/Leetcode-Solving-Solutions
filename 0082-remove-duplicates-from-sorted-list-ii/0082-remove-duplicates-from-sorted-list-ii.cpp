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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;
        int f=0;
        map<int, int> count;
        ListNode* cur = head;

        // Count occurrences of each value
        while (cur != nullptr) {
            count[cur->val]++;
            cur = cur->next;
        }

        cur = head;
        ListNode* prev = nullptr;

        // Keep only unique elements
        for (auto m : count) {
            if (m.second == 1) {
                cur->val = m.first;
                prev = cur;
                cur = cur->next;
                f=1;
            }
        }
        // Handle proper termination of the list
        if (prev) prev->next = nullptr;
        if(!f) return NULL;
        return head;
    }
};
