/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth, max_wealth=0;
        for (int i = 0; i < accounts.size(); i++)
        {
            wealth = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                wealth += accounts[i][j];
            }

            if (max_wealth<wealth)
            {
                max_wealth = wealth;
            }
        }
        return max_wealth;
    }
};
int main()
{
    
    return 0;
}