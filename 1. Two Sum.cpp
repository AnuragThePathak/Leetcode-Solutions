/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v(2);
        for (int i = 0, flag=0; i < v.size() - 1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i] + v[j] == target)
                {
                    v[0]=i, v[1]=j;
                    flag=1;
                    break;
                }
            }
            
            if(flag)
            {
                break;
            }
        }
        return v;
    }
};
int main()
{

    return 0;
}