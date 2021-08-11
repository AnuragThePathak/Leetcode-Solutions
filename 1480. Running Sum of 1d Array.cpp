/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> runningSum(nums.size());
        runningSum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            runningSum[i] = runningSum[i - 1] + nums[i];
        }
        return runningSum;
    }
};
int main()
{
    
    return 0;
}