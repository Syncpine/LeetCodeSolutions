/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
    {
        if(nullptr == headA || nullptr == headB)
        {
            return nullptr;
        }

        struct ListNode* ptrA = headA;
        struct ListNode* ptrB = headB;

        while(true)
        {
            if(ptrA == ptrB)
            {
                return ptrA;
            }

            ptrA = ptrA->next;
            ptrB = ptrB->next;

            if(nullptr == ptrA && nullptr == ptrB)
            {
                return nullptr;
            }

            if(nullptr == ptrA)
            {
                ptrA = headB;
            }

            if(nullptr == ptrB)
            {
                ptrB = headA;
            }
        }

        return nullptr;
    }
};