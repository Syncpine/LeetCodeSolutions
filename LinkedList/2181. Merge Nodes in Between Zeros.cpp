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
    struct ListNode* mergeNodes(struct ListNode* head)
    {
        struct ListNode* node = head;
        struct ListNode* ptr1 = head;
        struct ListNode* ptr2 = node;

        int cur = 0;

        while(nullptr != ptr1)
        {
            if(0 == ptr1->val)
            {
                if(0 != cur)
                {
                    ptr2->next = new ListNode(cur);
                    ptr2 = ptr2->next;
                    cur = 0;
                }
            }
            else
            {
                cur += ptr1->val;
            }

            ptr1 = ptr1->next;
        }

        head = node->next;

        return head;
    }
};