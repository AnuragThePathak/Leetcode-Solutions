/*
Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution {
    public int numberOfSteps(int num) {
        return helper(num, 0);
    }

    private int helper(int num, int count) {
        if (num == 0) return count;

        if (num % 2 == 0) num /= 2;
        else num--;

        return helper(num, ++count);
    }
}