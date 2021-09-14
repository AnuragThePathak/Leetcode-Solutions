/*
There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        // vector<int> height(gain.size()+1);
        // for (int i = 1; i < gain.size(); i++)
        // {
        //     height[i] = height[i - 1] + gain[i-1];
        // }

        // return *max_element(height.begin(),height.end());

        int height = 0, max_height = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            height += gain[i];
            if (gain[i] > 0)
            {
                if (height > max_height)
                {
                    max_height = height;
                }
            }
        }

        return max_height;
    }
};
int main()
{

    return 0;
}