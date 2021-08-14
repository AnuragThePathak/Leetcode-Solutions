/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (int(log10(nums[i]) + 1) % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};
int main()
{

    return 0;
}