/*
There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

    Increment all the cells on row ri.
    Increment all the cells on column ci.

Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {
        vector<vector<int>> matrix(m, vector<int>(n));
        int row_column;
        for (int i = 0; i < indices.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {
                row_column = indices[i][j];
                if (j==1)
                {
                    for (int k = 0; k < m; k++)
                    {
                        matrix[k][row_column]++;
                    }
                }

                else
                {
                    for (int k = 0; k < n; k++)
                    {
                        matrix[row_column][k]++;
                    }
                }
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] % 2)
                {
                    count++;
                }
            }
        }

        return count;
    }
};
int main()
{

    return 0;
}