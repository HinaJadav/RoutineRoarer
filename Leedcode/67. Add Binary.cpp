// 67. Add Binary

// https://leetcode.com/problems/add-binary/submissions/1180109572

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int l1 = a.length();
        int l2 = b.length();
        int l = max(l1, l2);
        string a1(l, '0');
        string b1(l, '0');

        if (l1 < l2)
        {
            b1 = b;
            int j = l1 - 1;
            for (int i = l - 1; i >= l - l1; i--)
            {
                a1[i] = a[j];
                j--;
            }
        }
        else if (l1 > l2)
        {
            a1 = a;
            int j = l2 - 1;
            for (int i = l - 1; i >= l - l2; i--)
            {
                b1[i] = b[j];
                j--;
            }
        }
        else if (l1 == l2)
        {
            a1 = a;
            b1 = b;
        }

        // cout << a1 << endl << b1;

        int carry = 0;
        string ans(l + 1, '0');
        for (int i = l - 1; i >= 0; i--)
        {
            if (a1[i] == '0' && b1[i] == '0')
            {
                if (carry == 0)
                {
                    ans[i + 1] = '0';
                }
                else if (carry == 1)
                {
                    ans[i + 1] = '1';
                    carry = 0;
                }
            }
            else if ((a1[i] == '0' && b1[i] == '1') ||
                     (a1[i] == '1' && b1[i] == '0'))
            {
                if (carry == 0)
                {
                    ans[i + 1] = '1';
                }
                else if (carry == 1)
                {
                    ans[i + 1] = '0';
                    carry = 1;
                }
            }
            else if (a1[i] == '1' && b1[i] == '1')
            {
                if (carry == 0)
                {
                    ans[i + 1] = '0';
                    carry = 1;
                }
                else if (carry == 1)
                {
                    ans[i + 1] = '1';
                    carry = 1;
                }
            }
        }
        if (carry == 1)
        {
            ans[0] = '1';
        }
        else
        {
            ans = ans.substr(1); // Remove leading zero if there's no carry in
                                 // the most significant bit
        }
        return ans;
    }
};
// Nested if-else is ideal when you want to check additional conditions based on
// the result of the initial condition.
