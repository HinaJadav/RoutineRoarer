// 3028. Ant on the Boundary

// https://leetcode.com/problems/ant-on-the-boundary/submissions/1177707806

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int returnToBoundaryCount(vector<int> &nums)
    {
        int sum = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += (nums[i]);
            if (sum == 0)
            {
                count++;
            }
        }
        return count;
    }
};