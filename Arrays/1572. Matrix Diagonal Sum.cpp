/*
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0, n = mat.size();
        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i] + mat[n - 1 - i][i];
        }

        if (n % 2 == 0)
        {
            return sum;
        }

        return (sum - mat[n / 2][n / 2]);
    }
};
int main()
{

    return 0;
}