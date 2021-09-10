/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans = {-1, -1};
        ans[0] = search(nums, target, true);
        if (ans[0] != -1)
        {
            ans[1] = search(nums, target, false);
        }

        return ans;
    }

    int search(vector<int> &nums, int target, bool is_searching_start)
    {
        int start = 0, end = nums.size() - 1, mid, ans = -1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (target < nums[mid])
            {
                end = mid - 1;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }

            else
            {
                ans = mid;
                if (is_searching_start)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            if (is_searching_start && end+1<nums.size()-1)
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}