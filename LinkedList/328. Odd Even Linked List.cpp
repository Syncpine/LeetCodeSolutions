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
    struct ListNode* oddEvenList(struct ListNode* head)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        if(nullptr == head->next)
        {
            return head; 
        }

        struct ListNode* head1 = nullptr;
        struct ListNode* head2 = nullptr;

        struct ListNode* ptr1 = nullptr;
        struct ListNode* ptr2 = nullptr;

        bool flag = true;

        head1 = head;
        head = head->next;
        head1->next = nullptr;

        head2 = head;
        head = head->next;
        head2->next = nullptr;

        ptr1 = head1;
        ptr2 = head2;

        while(nullptr != head)
        {
            if(flag)
            {
                ptr1->next = head;
                head = head->next;
                ptr1 = ptr1->next;
                ptr1->next = nullptr;
            }
            else
            {
                ptr2->next = head;
                head = head->next;
                ptr2 = ptr2->next;
                ptr2->next = nullptr;
            }

            flag = !flag;
        }

        ptr1->next = head2;

        return head1;
    }
};