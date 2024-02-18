// 3024. Type of Triangle

// https://leetcode.com/problems/type-of-triangle/submissions/1177720299

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        string ans;
        if (nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] &&
            nums[0] + nums[2] > nums[1])
        {
            if (nums[0] == nums[1] && nums[1] == nums[2])
                ans = "equilateral";
            else if (nums[0] != nums[1] && nums[1] != nums[2] &&
                     nums[0] != nums[2])
                ans = "scalene";
            else if ((nums[0] == nums[1] && nums[1] != nums[2]) ||
                     (nums[1] == nums[2] && nums[0] != nums[2]) ||
                     (nums[0] == nums[2] && nums[1] != nums[2]))
                ans = "isosceles";
        }
        else
            ans = "none";
        return ans;
    }
};