/*
The array-form of an integer num is an array representing its digits in left to right order.

    For example, for num = 1321, the array form is [1,3,2,1].

Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int num_ = 0, n=num.size();
        for (int i = 0; i < n; i++)
        {
            num_ += num[i]*pow(10, n - 1 - i);
        }

        num_ += k;
        
    }
};
int main()
{
    
    return 0;
}