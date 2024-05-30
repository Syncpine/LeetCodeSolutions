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
    struct ListNode* removeNthFromEnd(struct ListNode* head, int& n)
    {
        struct ListNode* fast = head;
        struct ListNode* slow = head;

        while(n--)
        {
            fast = fast->next;
        }

        if(nullptr == fast)
        {
            head = head->next;
            delete slow;
            return head;
        }

        while(true)
        {
            fast = fast->next;

            if(nullptr == fast)
            {
                break;
            }

            slow = slow->next;
        }

        fast = slow->next;
        slow->next = fast->next;
        delete fast;

        return head;
    }
};