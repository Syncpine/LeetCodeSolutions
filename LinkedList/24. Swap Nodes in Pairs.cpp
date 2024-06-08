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
    struct ListNode* swapPairs(struct ListNode* head)
    {
        struct ListNode* ptr = head;

        auto nodeCount = 0;

        while(nullptr != ptr)
        {
            ptr = ptr->next;
            ++nodeCount;
        }

        for(auto index = 1; index < nodeCount; index += 2)
        {
            head = reverseBetween(head, index, index + 1);
        }

        return head;
    }

private:
    struct ListNode* reverseBetween(struct ListNode* head, int left, int right)
    {
        struct ListNode* virtualHead = new ListNode(0, head);

        struct ListNode* slow = virtualHead;
        struct ListNode* fast = virtualHead;

        while(left--)
        {
            --right;

            slow = fast;
            fast = fast->next;
        }

        head = slow;
        slow = fast;
        fast = fast->next;

        while(right--)
        {
            slow->next = fast->next;
            fast->next = head->next;
            head->next = fast;
            fast = slow->next;
        }

        head = virtualHead->next;
        delete virtualHead;

        return head;
    }
};