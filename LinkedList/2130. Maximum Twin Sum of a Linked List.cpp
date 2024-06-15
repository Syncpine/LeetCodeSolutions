#include <stack>

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
    int pairSum(struct ListNode* head)
    {
        std::stack<int> st;

        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while(nullptr != fast)
        {
            fast = fast->next;

            if(nullptr == fast)
            {
                break;
            }

            fast = fast->next;

            st.push(slow->val);
            slow = slow->next;
        }

        auto max = 0;

        while(nullptr != slow)
        {
            auto sum = st.top() + slow->val;

            if(sum > max)
            {
                max = sum;
            }

            st.pop();
            slow = slow->next;
        }

        return max;
    }
};