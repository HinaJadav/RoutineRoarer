// 240. Search a 2D Matrix II

// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/1183913786

// big time complexity

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i = 0; i < matrix.size(); i++) {
//             if(matrix[i][0] <= target) {
//                 for(int j = 0; j < matrix[i].size(); j++) {
//                     if(matrix[i][j] == target) {
//                         return true;
//                     }
//                 }
//             }
//         }
//         return false;
//     }
// };

// with less time complexity

// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/1183927271

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        if (m == 0)
            return false;
        int n = matrix[0].size();
        if (n == 0)
            return false;

        for (int i = 0; i < m; i++)
        {
            int start = 0, end = n - 1;
            while (start <= end)
            {
                int middle = start + (end - start) / 2;
                if (matrix[i][middle] == target)
                {
                    return true;
                }
                else if (matrix[i][middle] > target)
                {
                    end = middle - 1;
                }
                else
                { // middle < target
                    start = middle + 1;
                }
            }
        }
        return false;
    }
};