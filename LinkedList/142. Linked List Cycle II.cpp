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
        if(!hasCycle(head))
        {
            return nullptr;
        }

        struct ListNode* curNode = head;

        std::set<ListNode*> addressSet;

        while(true)
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

private:
    bool hasCycle(struct ListNode *head)
    {
        if(nullptr == head)
        {
            return false;
        }

        struct ListNode* fastNode = head;
        struct ListNode* slowNode = head;

        while(nullptr != fastNode)
        {
            fastNode = fastNode->next;
            slowNode = slowNode->next;

            if(nullptr == fastNode)
            {
                return false;
            }

            fastNode = fastNode->next;

            if(fastNode == slowNode)
            {
                return true;
            }
        }

        return false;
    }
};