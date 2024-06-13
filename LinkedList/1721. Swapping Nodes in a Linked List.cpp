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
    struct ListNode* swapNodes(struct ListNode* head, const int& k)
    {
        struct ListNode* virtualHead = new ListNode(0, head);

        struct ListNode* ptr1 = virtualHead;
        struct ListNode* ptr2 = virtualHead;

        struct ListNode* ptr = virtualHead;

        auto index = 0;

        while(index < k)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            ++index;
        }

        while(nullptr != ptr->next)
        {
            ptr = ptr->next;
            ptr2 = ptr2->next;
        }

        if(ptr1 == ptr2)
        {
            ;
        }
        else if(ptr1->next == ptr2)
        {
            ptr1->next = ptr2->next;
            ptr2->next = ptr1->next->next;
            ptr1->next->next = ptr2;
        }
        else if(ptr1 == ptr2->next)
        {
            ptr2->next = ptr1->next;
            ptr1->next = ptr2->next->next;
            ptr2->next->next = ptr1;
        }
        else
        {
            struct ListNode* node1 = ptr1->next;
            ptr1->next = node1->next;

            struct ListNode* node2 = ptr2->next;
            ptr2->next = node2->next;

            node2->next = ptr1->next;
            ptr1->next = node2;

            node1->next = ptr2->next;
            ptr2->next = node1;
        }

        head = virtualHead->next;
        delete virtualHead; 

        return head;
    }
};