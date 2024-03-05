// 283. Move Zeroes

// https://leetcode.com/problems/move-zeroes/submissions/1194652924

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[count++], nums[i]);
            }
        }
    }
};
