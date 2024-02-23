// 74. Search a 2D Matrix

// https://leetcode.com/problems/search-a-2d-matrix/submissions/1183909349

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            if (target >= matrix[i][0])
            {
                for (int k = 0; k < matrix[i].size(); k++)
                {
                    if (target == matrix[i][k])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};