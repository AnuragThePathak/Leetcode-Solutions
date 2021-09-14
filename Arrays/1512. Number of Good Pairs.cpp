/*
Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int good_pair = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    good_pair++;
                }
            }
        }

        return good_pair;
    }
};
int main()
{

    return 0;
}