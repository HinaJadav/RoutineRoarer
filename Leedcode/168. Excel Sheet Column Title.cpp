// 168. Excel Sheet Column Title

// https://leetcode.com/problems/excel-sheet-column-title/submissions/1181258686

#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        if (columnNumber == 0)
            return "";
        string ans;
        while (columnNumber > 0)
        {
            columnNumber--; // here, we adjust index start from '0'
            int reminder =
                columnNumber %
                26; // take value for character from columnNumber last to first
            ans.push_back('A' + reminder);
            columnNumber /= 26; // update value
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
