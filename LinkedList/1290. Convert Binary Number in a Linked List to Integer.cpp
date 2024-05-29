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
    int getDecimalValue(struct ListNode* head)
    {
        struct ListNode* curNode = head;
        int dec = 0;

        while(nullptr != curNode)
        {
            dec = dec * 2 + curNode->val;
            curNode = curNode->next;
        }

        return dec;
    }
};