// 2460. Apply Operations to an Array

// https://leetcode.com/problems/apply-operations-to-an-array/submissions/1194664896

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[count++], nums[i]);
            }
        }
        return nums;
    }
};