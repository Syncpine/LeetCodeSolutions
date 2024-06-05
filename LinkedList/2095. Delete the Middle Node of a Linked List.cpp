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
    struct ListNode* deleteMiddle(struct ListNode* head)
    {
        if(nullptr== head->next)
        {
            delete head;
            head = nullptr;
            return head;
        }

        struct ListNode* slow = head;
        struct ListNode* fast = head;

        fast = fast->next;

        while(nullptr != fast->next)
        {
            fast = fast->next;

            if(nullptr == fast->next)
            {
                break;
            }

            slow = slow->next;
            fast = fast->next;
        }

        fast = slow->next;
        slow->next = fast->next;
        delete fast;

        return head;
    }
};