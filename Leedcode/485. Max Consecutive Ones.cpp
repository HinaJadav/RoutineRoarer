// 485. Max Consecutive Ones

// https://leetcode.com/problems/max-consecutive-ones/submissions/1183314991

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                if (count > max)
                {
                    max = count;
                }
                count = 0;
            }
        }
        if (count > max)
        {
            max = count;
        }
        return max;
    }
};
