#include <algorithm>

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
    int numComponents(struct ListNode* head, const std::vector<int>& nums)
    {
        struct ListNode* ptr = head;

        int ans = 0;
        bool flag = false;

        while(nullptr != ptr)
        {
            if(nums.end() == std::find(nums.begin(), nums.end(), ptr->val))
            {
                ans = (flag ? ans + 1 : ans);
                flag = false;
            }
            else
            {
                flag = true;
            }

            ptr = ptr->next;
        }

        if(flag)
        {
            ++ans;
        }

        return ans;
    }
};