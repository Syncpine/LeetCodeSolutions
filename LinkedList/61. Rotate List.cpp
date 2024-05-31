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
    struct ListNode* rotateRight(struct ListNode* head, int& k)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        struct ListNode* fast = head;
        struct ListNode* slow = head;

        auto nodeCount = 0;

        while(nullptr != fast)
        {
            slow = fast;
            fast = fast->next;
            ++nodeCount;
        }

        slow->next = head;
        k = k % nodeCount;
        k = nodeCount - k;

        while(k--)
        {
            slow = head;
            head = head->next;
        }

        slow->next = nullptr;

        return head;
    }
};