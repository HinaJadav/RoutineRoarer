// 3033. Modify the Matrix

// https://leetcode.com/problems/modify-the-matrix/submissions/1175131574

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        if (matrix.empty()) // Basecase: it reduce half of time complexity
            return {};

        vector<vector<int>> answer;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> max_ele_pr_col(n, INT_MIN);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                max_ele_pr_col[i] = max(max_ele_pr_col[i], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[j][i] == -1)
                {
                    matrix[j][i] = max_ele_pr_col[i];
                }
            }
        }
        return matrix;
    }
};