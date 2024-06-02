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
    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        struct ListNode* l3 = addTwoNumbers_I(l1, l2);

        l3 = reverseList(l3);

        return l3;
    }

private:
    struct ListNode* addTwoNumbers_I(struct ListNode* l1, struct ListNode* l2)
    {
        struct ListNode* l3 = nullptr;

        struct ListNode* ptr1 = l1;
        struct ListNode* ptr2 = l2;
        struct ListNode* ptr3 = l3;

        int cc = 0;
        int curVal = ptr1->val + ptr2->val + cc;

        cc = curVal / 10;
        curVal = curVal % 10;

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        l3 = new ListNode(curVal, nullptr);
        ptr3 = l3;

        while(nullptr != ptr1 && nullptr != ptr2)
        {
            curVal = ptr1->val + ptr2->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        while(nullptr != ptr1)
        {
            curVal = ptr1->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr1 = ptr1->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        while(nullptr != ptr2)
        {
            curVal = ptr2->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr2 = ptr2->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        if(0 != cc)
        {
            ptr3->next = new ListNode(cc, nullptr);
            ptr3 = ptr3->next;
        }

        return l3;
    }

private:
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