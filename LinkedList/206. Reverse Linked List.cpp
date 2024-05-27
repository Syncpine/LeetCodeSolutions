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

/*
 * Case1: 
 */

class Solution {
public:
    struct ListNode* reverseList(struct ListNode* head)
    {
        struct ListNode* pNode = nullptr;
        struct ListNode* qNode = nullptr;

        while(nullptr != head)
        {
            qNode = head->next;
            head->next = pNode;
            pNode = head;
            head = qNode;
        }

        return pNode;
    }
};

/*
 * Case2: Use virtual head node
 */

class Solution {
public:
    struct ListNode* reverseList(struct ListNode* head)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        struct ListNode* virtualHead = new ListNode(0, head);
        struct ListNode* curNode = head->next;
        head->next = nullptr;

        while(nullptr != curNode)
        {
            head = curNode->next;
            curNode->next = virtualHead->next;
            virtualHead->next = curNode;
            curNode = head;
        }

        head = virtualHead->next;
        delete virtualHead;

        return head;
    }
};