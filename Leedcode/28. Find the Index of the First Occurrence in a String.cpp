// 28. Find the Index of the First Occurrence in a String

// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1178386017

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int ans = -1;
        for (int i = 0; i < haystack.length(); i++)
        {
            string haystack_substr = haystack.substr(i, needle.length());
            if (haystack_substr == needle)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
