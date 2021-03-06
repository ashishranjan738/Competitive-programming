#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> Solution::solve(int A);
};

// Given numRows, generate the first numRows of Pascal’s triangle.

// Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

// Example:

// Given numRows = 5,

// Return

// [
//      [1],
//      [1,1],
//      [1,2,1],
//      [1,3,3,1],
//      [1,4,6,4,1]
// ]

vector<vector<int>> Solution::solve(int A)
{
    vector<vector<int>> mat(A);
    for (int i = 0; i < A; i++)
        mat[i] = vector<int>(i + 1, 1);
    for (int i = 1; i < A; i++)
    {
        for (int j = 1; j < i; j++)
            mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
    }
    return mat;
}
