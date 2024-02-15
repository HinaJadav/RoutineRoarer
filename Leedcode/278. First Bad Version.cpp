// 278. First Bad Version

// https://leetcode.com/problems/first-bad-version/submissions/1176208332

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        if (n == 0)
            return 0;
        int i = 0;
        int j = n;
        while (i < j)
        {
            int m = i + (j - i) / 2; // m used for points new updated middle element
            if (isBadVersion(m))
            {
                j = m;
            }
            else
            {
                i = m + 1;
            }
        }
        return i;
    }
};