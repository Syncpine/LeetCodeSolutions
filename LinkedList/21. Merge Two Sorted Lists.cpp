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
    struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
    {
        if(nullptr == list1)
        {
            return list2;
        }

        if(nullptr == list2)
        {
            return list1;
        }

        struct ListNode* list3 = nullptr, *ptr3 = nullptr;

        if(list1->val <= list2->val)
        {
            list3 = ptr3 = list1;
            list1 = list1->next;
        }
        else
        {
            list3 = ptr3 = list2;
            list2 = list2->next;
        }

        while(true)
        {
            if(nullptr == list1)
            {
                ptr3->next = list2;
                break;
            }

            if(nullptr == list2)
            {
                ptr3->next = list1;
                break;
            }

            if(list1->val <= list2->val)
            {
                ptr3->next = list1;
                list1 = list1->next;
            }
            else
            {
                ptr3->next = list2;
                list2 = list2->next;
            }

            ptr3 = ptr3->next;
            ptr3->next = nullptr;
        }

        return list3;
    }
};