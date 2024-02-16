// 136. Single Number

// https://leetcode.com/problems/single-number/submissions/1177294979

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans;

        if (nums.empty())
            return -1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                i++;
            else
            {
                ans = i;
                break;
            }
        }
        return nums[ans];
    }
};