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
    std::vector<std::vector<int>> spiralMatrix(const int& m, const int& n, struct ListNode* head)
    {
        std::vector<std::vector<int>> vec(m, std::vector<int>(n, -1));

        Range range(0, 0, n - 1, m - 1);

        _Direction = LeftToRight;

        auto xx = -1, yy = 0;

        struct ListNode* ptr = head;

        while(nullptr != ptr)
        {
            switch(_Direction)
            {
                case LeftToRight:
                {
                    if(xx == range.Right)
                    {
                        ++yy;
                        ++range.Top;
                        _Direction = UpToBottom;
                    }
                    else
                    {
                        ++xx;
                    }
                } break;
                case UpToBottom:
                {
                    if(yy == range.Bottom)
                    {
                        --xx;
                        --range.Right;
                        _Direction = RightToLeft;
                    }
                    else
                    {
                        ++yy;
                    }
                } break;
                case RightToLeft:
                {
                    if(xx == range.Left)
                    {
                        --yy;
                        --range.Bottom;
                        _Direction = BottomToUp;
                    }
                    else
                    {
                        --xx;
                    }
                } break;
                case BottomToUp:
                {
                    if(yy == range.Top)
                    {
                        ++xx;
                        ++range.Left;
                        _Direction = LeftToRight;
                    }
                    else
                    {
                        --yy;
                    }
                } break;
            }

            vec[yy][xx] = ptr->val;

            ptr = ptr->next;
        }

        return vec;
    }

private:
    struct Range
    {
        int Left;
        int Top;
        int Right;
        int Bottom;
        Range(int left, int top, int right, int bottom) : Left(left), Top(top), Right(right), Bottom(bottom) { }
    };

private:
    enum Direction
    {
        LeftToRight,
        UpToBottom,
        RightToLeft,
        BottomToUp,
    };

private:
    enum Direction _Direction;
};