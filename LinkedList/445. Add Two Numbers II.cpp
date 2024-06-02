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

/*
 * Case1: Use std::stack<>
 */

#include <stack>

class Solution {
public:
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

/*
 * Case2: Use reverseList()
 */

class Solution {
public:
    struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
    {
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        struct ListNode* l3 = addTwoNumbers_I(l1, l2);

        l3 = reverseList(l3);

        return l3;
    }

private:
    struct ListNode* addTwoNumbers_I(struct ListNode* l1, struct ListNode* l2)
    {
        struct ListNode* l3 = nullptr;

        struct ListNode* ptr1 = l1;
        struct ListNode* ptr2 = l2;
        struct ListNode* ptr3 = l3;

        int cc = 0;
        int curVal = ptr1->val + ptr2->val + cc;

        cc = curVal / 10;
        curVal = curVal % 10;

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        l3 = new ListNode(curVal, nullptr);
        ptr3 = l3;

        while(nullptr != ptr1 && nullptr != ptr2)
        {
            curVal = ptr1->val + ptr2->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        while(nullptr != ptr1)
        {
            curVal = ptr1->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr1 = ptr1->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        while(nullptr != ptr2)
        {
            curVal = ptr2->val + cc;

            cc = curVal / 10;
            curVal = curVal % 10;

            ptr2 = ptr2->next;

            ptr3->next = new ListNode(curVal, nullptr);
            ptr3 = ptr3->next;
        }

        if(0 != cc)
        {
            ptr3->next = new ListNode(cc, nullptr);
            ptr3 = ptr3->next;
        }

        return l3;
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
};