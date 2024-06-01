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
    struct ListNode* partition(struct ListNode* head, int x)
    {
        struct ListNode* virtualHead1 = new ListNode(0, nullptr);
        struct ListNode* virtualHead2 = new ListNode(0, nullptr);

        struct ListNode* ptr = head;
        struct ListNode* ptr1 = virtualHead1;   // ptr1->val < x
        struct ListNode* ptr2 = virtualHead2;   // ptr2->val > x

        while(nullptr != ptr)
        {
            if(ptr->val < x)
            {
                ptr1->next = ptr;
                ptr = ptr->next;
                ptr1 = ptr1->next;
                ptr1->next = nullptr;
            }
            else
            {
                ptr2->next = ptr;
                ptr = ptr->next;
                ptr2 = ptr2->next;
                ptr2->next = nullptr;
            }
        }

        ptr1->next = virtualHead2->next;
        head = virtualHead1->next;

        delete virtualHead1;
        delete virtualHead2;

        return head;
    }
};