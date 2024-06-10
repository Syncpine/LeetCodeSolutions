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
    std::vector<struct ListNode*> splitListToParts(struct ListNode* head, const int& k)
    {
        std::vector<struct ListNode*> vecList;

        struct ListNode* curHead = head;
        struct ListNode* curTail = head;
        struct ListNode* ptr = head;

        auto nodeCount = 0;

        while(nullptr != ptr)
        {
            ptr = ptr->next;
            ++nodeCount;
        }

        auto cc = nodeCount / k;
        auto mod = nodeCount % k;

        for(auto index = 0; index < k; ++index)
        {
            ptr = curHead;

            nodeCount = (mod > 0) ? cc + 1 : cc;
            --mod;

            if(0 == nodeCount)
            {
                vecList.push_back(nullptr);
                continue;
            }

            while(nodeCount > 0)
            {
                curTail = ptr;
                ptr = ptr->next;
                --nodeCount;
            }

            curTail->next = nullptr;
            vecList.push_back(curHead);

            curHead = ptr;
        }

        return vecList;
    }
};