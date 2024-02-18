//  58. Length of Last Word

// https://leetcode.com/problems/length-of-last-word/submissions/1178517440

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        if (s.length() == 0)
            return 0;
        int ans = 0;

        // here, for manage more than one space which use flag
        int is_space = true;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                ans++;
                is_space = false;
            }
            else if (s[i] == ' ' && is_space == false)
            {
                break;
            }
        }
        return ans;
    }
};