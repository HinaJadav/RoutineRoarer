// 704. Binary Search

// https://leetcode.com/problems/binary-search/submissions/1183256510

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};