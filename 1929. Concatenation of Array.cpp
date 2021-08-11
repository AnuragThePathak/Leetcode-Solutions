/* Given an integer array ngth n, you want to create an array ans of length 2n where ans[i] == n ans[i + n] == n 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two n.

Return the array ans. */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
        }
        for (int i = n; i < 2 * n; i++)
        {
            ans[i] = nums[i - n];
        }
        return ans;
    }
};
int main()
{

    return 0;
}