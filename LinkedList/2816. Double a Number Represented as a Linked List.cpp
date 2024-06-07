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
    struct ListNode* doubleIt(struct ListNode* head)
    {
        if(nullptr == head)
        {
            return nullptr;
        }

        struct ListNode* head2 = new ListNode(0, nullptr);

        struct ListNode* ptr1 = head;
        struct ListNode* ptr2 = head2;

        struct ListNode* head3 = nullptr;

        while(nullptr != ptr1)
        {
            ptr2->next = new ListNode(ptr1->val, nullptr);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        head3 = addTwoNumbers(head, head2->next);

        return head3;
    }

private:
    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
    {
        if(nullptr == l1)
        {
            return l2;
        }

        if(nullptr == l2)
        {
            return l1;
        }

        std::stack<int> st1;
        std::stack<int> st2;
        std::stack<int> st;

        int cc = 0;

        struct ListNode* l3 = nullptr;
        struct ListNode* ptr = nullptr;

        ListValue2Stack(l1, st1);
        ListValue2Stack(l2, st2);

        while(!st1.empty() && !st2.empty())
        {
            int curVal = st1.top() + st2.top() + cc;
            
            cc = curVal / 10;
            curVal = curVal % 10;

            st.push(curVal);

            st1.pop();
            st2.pop();
        }

        while(!st1.empty())
        {
            int curVal = st1.top() + cc;
            
            cc = curVal / 10;
            curVal = curVal % 10;

            st.push(curVal);

            st1.pop();
        }

        while(!st2.empty())
        {
            int curVal = st2.top() + cc;
            
            cc = curVal / 10;
            curVal = curVal % 10;

            st.push(curVal);

            st2.pop();
        }

        if(1 == cc)
        {
            st.push(cc);
        }

        l3 = new ListNode(st.top(), nullptr);
        ptr = l3;
        st.pop();

        while(!st.empty())
        {
            ptr->next = new ListNode(st.top());
            ptr = ptr->next;
            st.pop();
        }

        return l3;
    }

private:
    void ListValue2Stack(struct ListNode* head, std::stack<int>& st)
    {
        struct ListNode* ptr = head;

        while(nullptr != ptr)
        {
            st.push(ptr->val);
            ptr = ptr->next;
        }
    }
};