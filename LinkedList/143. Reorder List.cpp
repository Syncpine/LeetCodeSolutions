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
    void reorderList(struct ListNode* head)
    {
        struct ListNode* head1 = head;
        struct ListNode* ptr = middleNode(head);

        struct ListNode* head2 = ptr->next;

        ptr->next = nullptr;

        head2 = reverseList(head2);

        head = head1;
        while(nullptr != head2)
        {
            ptr = head2;
            head2 = head2->next;

            ptr->next = head1->next;
            head1->next = ptr;

            head1 = head1->next;
            head1 = head1->next;
        }
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

private:
    struct ListNode* middleNode(struct ListNode* head)
    {
        struct ListNode* fast = head;
        struct ListNode* slow = head;

        while(true)
        {
            fast = fast->next;

            if(nullptr == fast)
            {
                return slow;
            }

            fast = fast->next;

            if(nullptr == fast)
            {
                return slow;
            }

            slow = slow->next;
        }

        return slow;
    }
};