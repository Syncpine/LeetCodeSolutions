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

        struct ListNode* ptr = head;

        auto nodeCount = 0;
        auto ss = 0;
        auto mod = 0;

        while(nullptr != ptr)
        {
            ptr = ptr->next;
            ++nodeCount;
        }

        ss = nodeCount / k;
        mod = nodeCount % k;

        for(int index = 0; index < mod; ++index)
        {
            struct ListNode* firstNode = nullptr;
            int m = ss + 1;
            ptr = head;

            while(m > 0)
            {
                ptr = head;
                head = head->next;
                
                if(nullptr == firstNode)
                {
                    firstNode = ptr;
                }

                --m;
            }

            ptr->next = nullptr;
            vecList.push_back(firstNode);
        }

        mod = k - mod;

        for(int index = 0; index < mod; ++index)
        {
            struct ListNode* firstNode = nullptr;

            if(0 == ss)
            {
                vecList.push_back(firstNode);
                continue;
            }

            int m = ss;
            ptr = head;

            while(m > 0)
            {
                ptr = head;
                head = head->next;
                
                if(nullptr == firstNode)
                {
                    firstNode = ptr;
                }

                --m;
            }

            ptr->next = nullptr;
            vecList.push_back(firstNode);
        }

        return vecList;
    }
};