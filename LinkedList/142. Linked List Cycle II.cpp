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
    struct ListNode *detectCycle(struct ListNode *head)
    {
        struct ListNode* curNode = head;

        std::set<ListNode*> addressSet;

        while(nullptr != curNode)
        {
            if(1 == addressSet.count(curNode))
            {
                return curNode;
            }

            addressSet.insert(curNode);
            curNode = curNode->next;
        }

        return nullptr;
    }
};