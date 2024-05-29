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
    bool isPalindrome(struct ListNode* head)
    {
        struct ListNode* fast = head;
        struct ListNode* slow = head;

        std::stack<int> st;

        while(nullptr != fast)
        {
            st.push(slow->val);
            fast = fast->next;

            if(nullptr == fast)
            {
                break;
            }

            fast = fast->next;
            slow = slow->next;
        }

        while(nullptr != slow)
        {
            if(st.top() != slow->val)
            {
                return false;
            }

            slow = slow->next;
            st.pop();
        }

        return true;
    }
};