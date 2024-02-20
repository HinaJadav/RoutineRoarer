// 3019. Number of Changing Keys

// https://leetcode.com/problems/number-of-changing-keys/submissions/1181236173

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countKeyChanges(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (tolower(s[i]) != tolower(s[i + 1]))
            {
                ans++;
            }
        }
        return ans;
    }
};