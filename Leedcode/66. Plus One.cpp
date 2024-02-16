// 66. Plus One

// https://leetcode.com/problems/plus-one/submissions/1176993759

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        vector<int> ans(n);

        int update_place = -1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                update_place = i;
                break;
            }
        }
        cout << update_place << endl;
        if (update_place == -1)
        {
            ans.resize(n + 1);
            ans[0]++;
        }
        else
        {
            ans = digits;

            for (int i = n - 1; i >= update_place; i--)
            {
                ans[i] += 1;
                if (ans[i] > 9)
                {
                    ans[i] = 0;
                }
            }
        }
        return ans;
    }
};