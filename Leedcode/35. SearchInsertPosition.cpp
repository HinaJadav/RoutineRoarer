// 35. Search Insert Position

// https://leetcode.com/problems/search-insert-position/submissions/1176182301

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.empty())
            return 0;
        int i = 0;               // use to points first lement
        int j = nums.size() - 1; // used to points last element
        while (i <= j)
        {
            int m = i + (j - i) / 2; // m used for points new updated middle element
            if (target == nums[m])
            {
                return m;
            }
            else if (target < nums[m])
            {
                j = m - 1;
            }
            else if (target > nums[m])
            {
                i = m + 1;
            }
        }
        return i;
    }
};