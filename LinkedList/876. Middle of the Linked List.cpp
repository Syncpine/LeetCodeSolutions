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
    struct ListNode* middleNode(struct ListNode* head)
    {
        struct ListNode* fast = head;
        struct ListNode* slow = head;

        while(nullptr != fast)
        {
            fast = fast->next;

            if(nullptr == fast)
            {
                return slow;
            }

            fast = fast->next;
            slow = slow->next;
        }

        return slow;
    }
};