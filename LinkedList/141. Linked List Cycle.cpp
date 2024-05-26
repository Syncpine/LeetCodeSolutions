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