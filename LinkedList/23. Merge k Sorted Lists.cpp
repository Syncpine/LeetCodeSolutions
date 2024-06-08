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
    struct ListNode* mergeKLists(std::vector<struct ListNode*>& lists)
    {
        struct ListNode* virtualHead = new ListNode(0, nullptr);
        struct ListNode* ptr = virtualHead;

        while(true)
        {
            RemoveNullptrList(lists);

            if(0 == lists.size())
            {
                break;
            }

            ptr->next = FindCurMinValueNode(lists);
            ptr = ptr->next;
        }

        return virtualHead->next;
    }

private:
    void RemoveNullptrList(std::vector<struct ListNode*>& lists)
    {
        std::vector<struct ListNode*> backup;

        for(auto list : lists)
        {
            if(nullptr != list)
            {
                backup.push_back(list);
            }
        }

        lists = backup;
    }

private:
    struct ListNode* FindCurMinValueNode(std::vector<struct ListNode*>& lists)
    {
        auto curMinIndex = 0;
        auto vecSize = lists.size();

        for(int index = 1; index < vecSize; ++index)
        {
            if(lists[curMinIndex]->val > lists[index]->val)
            {
                curMinIndex = index;
            }
        }

        struct ListNode* delNode = lists[curMinIndex];

        lists[curMinIndex] = lists[curMinIndex]->next;

        delNode->next = nullptr;

        return delNode;
    }
};