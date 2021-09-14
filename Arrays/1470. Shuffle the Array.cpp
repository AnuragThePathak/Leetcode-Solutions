/* Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for (int i = 0; i < n; i++)
        {
            ans[2 * i] = nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            ans[2 * i + 1] = nums[i + n ];
        }

        // alter
        // for (int i = 0; i < 2*n; i++)
        // {
        //     if (i<n)
        //     {
        //         ans[2 * i] = nums[i];
        //     }
        //     else
        //     {
        //         ans[2 * (i-n) + 1] = nums[i];
        //     }
        // }
        return ans;
    }
};
int main()
{
    
    return 0;
}