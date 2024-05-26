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
    struct ListNode* removeElements(struct ListNode* head, const int& val)
    {
        struct ListNode* virtualHead = new ListNode(0, head);
        struct ListNode* curNode = virtualHead;

        while(nullptr != head)
        {
            if(val == head->val)
            {
                curNode->next = head->next;
                delete head;
                head = curNode->next;
            }
            else
            {
                curNode = head;
                head = head->next;
            }
        }

        head = virtualHead->next;
        delete virtualHead;

        return head;
    }
};