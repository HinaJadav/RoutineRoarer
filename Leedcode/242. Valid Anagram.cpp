// 242. Valid Anagram

// https://leetcode.com/problems/valid-anagram/submissions/1181924639

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return true;
        return false;
    }
};

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.