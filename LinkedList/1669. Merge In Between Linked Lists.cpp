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
    struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2)
    {
        struct ListNode* ptr1 = list1;
        struct ListNode* ptr2 = list1;

        struct ListNode* ptr3 = ptr1;

        struct ListNode* ptr4 = list2;

        while(b > a)
        {
            ptr2 = ptr2->next;
            --b;
        }

        while(a > 0)
        {
            ptr3 = ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            --a;
        }

        ptr2 = ptr2->next;

        while(ptr3->next != ptr2)
        {
            struct ListNode* tmp = ptr3->next;
            ptr3->next = tmp->next;
            delete tmp;
        }

        while(nullptr != ptr4->next)
        {
            ptr4 = ptr4->next;
        }

        ptr3->next = list2;

        ptr4->next = ptr2;

        return list1;
    }
};