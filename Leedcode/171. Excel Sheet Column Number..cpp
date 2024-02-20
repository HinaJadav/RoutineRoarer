// 171. Excel Sheet Column Number

// https://leetcode.com/problems/excel-sheet-column-number/submissions/1181302842

#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        if (columnTitle == "")
            return 0;

        int ans = 0;
        int j = columnTitle.length() - 1;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            int temp = columnTitle[i] - 'A' + 1;
            // cout << temp;
            ans = ans + (temp * pow(26, j));
            j--;
        }

        return ans;
    }
};