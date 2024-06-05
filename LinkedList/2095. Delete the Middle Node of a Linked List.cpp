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

        struct ListNode* ptr = head;
        auto nodeCount = 0;
        auto middleIndex = 0;

        while(nullptr != ptr)
        {
            ptr = ptr->next;
            ++nodeCount;
        }

        middleIndex = nodeCount / 2;

        ptr = head;

        while(true)
        {
            --middleIndex;
            if(middleIndex <= 0)
            {
                break;
            }
            ptr = ptr->next;
        }

        ptr->next = ptr->next->next;

        return head;
    }
};