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
    std::vector<int> nodesBetweenCriticalPoints(struct ListNode* head)
    {
        std::vector<int> retVec = { INT_MAX, -1 };

        auto firstIndex = -1;
        auto preIndex = -1;
        auto index = 2;

        auto preNodeValue = head->val;

        struct ListNode* ptr = head->next;

        while(nullptr != ptr->next)
        {
            if(ptr->val > std::max(preNodeValue, ptr->next->val)
                || ptr->val < std::min(preNodeValue, ptr->next->val))
            {
                if(-1 == firstIndex)
                {
                    firstIndex = index;
                }
                else
                {
                    retVec[0] = std::min(retVec[0], index - preIndex);
                }

                preIndex = index;
            }

            preNodeValue = ptr->val;
            ptr = ptr->next;
            ++index;
        }

        if(firstIndex == preIndex)
        {
            return { -1, -1 };
        }

        retVec[1] = preIndex - firstIndex;

        return retVec;
    }
};