// 125. Valid Palindrome

// old solution
// https://leetcode.com/problems/valid-palindrome/submissions/1180164055

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         bool ans = false;

//         for(int i = 0; i < s.length(); i++) { // convert Uppercase to lower case
//             if(s[i] >= 'A' && s[i] <= 'Z') {
//                 s[i] += 32;
//             }
//         }
//         cout << s << endl;

//         // make new string from 's' is 'temp_s' which only stores alphabets(a-z) and numeric(0-9)
//         string temp_s(s.length(), ','); // string in initially we assume 'temp_s' length is equal to length of 's' --> worst case
//         int j = 0;
//         for(int i = 0; i < s.length(); i++) {
//             if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
//                 temp_s[j] = s[i];
//                 j++;
//             }
//         }

//         temp_s.erase(remove(temp_s.begin(), temp_s.end(), ','), temp_s.end()); // remove extra '0'

//         string rev_s = temp_s;
//         reverse(rev_s.begin(), rev_s.end()); // reverse string
//         cout << temp_s << endl;
//         cout << rev_s << endl;
//         if(temp_s == rev_s) { // compare string
//             ans = true;
//         }

//         return ans;
//     }
// };

// new solution --> with better time complexity
// https://leetcode.com/problems/valid-palindrome/submissions/1180175176

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.empty())
            return true;

        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            if (!isalnum(s[left]))
            {
                left++;
            }
            else if (!isalnum(s[right]))
            {
                right--;
            }
            else
            {
                if (tolower(s[left]) != tolower(s[right]))
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
// isalnum --> is function check for(a-z), (0-9), (A-Z)