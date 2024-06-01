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
    struct ListNode* insertionSortList(struct ListNode* head)
    {
        struct ListNode* virtualHead = new ListNode(0, head);

        struct ListNode* tail = virtualHead;
        struct ListNode* cur = virtualHead;

        while(nullptr != tail->next)
        {
            struct ListNode* preInsertNode = tail;
            cur = tail;

            while(nullptr != cur->next)
            {
                if(cur->next->val < preInsertNode->next->val)
                {
                    preInsertNode = cur;
                }

                cur = cur->next;
            }

            struct ListNode* insertNode = preInsertNode->next;
            preInsertNode->next = insertNode->next;

            insertNode->next = tail->next;
            tail->next = insertNode;
            tail = tail->next;
        }

        head = virtualHead->next;
        delete virtualHead;

        return head;
    }
};