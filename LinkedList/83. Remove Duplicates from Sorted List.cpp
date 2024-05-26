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
    struct ListNode* deleteDuplicates(struct ListNode* head)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        struct ListNode* pNode = head;
        struct ListNode* qNode = head->next;

        while(nullptr != qNode)
        {
            if(pNode->val == qNode->val)
            {
                pNode->next = qNode->next;
                delete qNode;
            }
            else
            {
                pNode = pNode->next;
            }

            qNode = pNode->next;
        }

        return head;
    }
};