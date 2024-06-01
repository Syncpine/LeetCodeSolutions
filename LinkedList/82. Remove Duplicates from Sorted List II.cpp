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
    struct ListNode* deleteDuplicates(struct ListNode* head)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        struct ListNode* virtualHead = new ListNode(0, head);

        struct ListNode* tailNode = virtualHead;
        struct ListNode* curNode = head->next;

        bool deleteThis = false;

        while(nullptr != curNode)
        {
            if(head->val != curNode->val)
            {
                if(deleteThis)
                {
                    delete head;
                    head = curNode;
                    tailNode->next = head;
                    curNode = curNode->next;
                    deleteThis = false;
                    continue;
                }

                tailNode = head;
                head = curNode;
                curNode = curNode->next;
            }
            else
            {
                head->next = curNode->next;
                delete curNode;
                curNode = head->next;
                deleteThis = true;
            }
        }

        if(deleteThis)
        {
            delete head;
            head = curNode;
            tailNode->next = head;
            deleteThis = false;
        }

        head = virtualHead->next;
        delete virtualHead;

        return head;
    }
};