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
    std::vector<int> nextLargerNodes(struct ListNode* head)
    {
        std::vector<int> vec;

        struct ListNode* ptr1 = head;
        struct ListNode* ptr2 = nullptr;

        while(nullptr != ptr1)
        {
            ptr2 = ptr1->next;
            while(nullptr != ptr2)
            {
                if(ptr1->val < ptr2->val)
                {
                    vec.push_back(ptr2->val);
                    break;
                }

                ptr2 = ptr2->next;
            }

            if(nullptr == ptr2)
            {
                vec.push_back(0);
            }

            ptr1 = ptr1->next;
        }

        return vec;
    }
};