/*
Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.
*/

class Solution {
    public int firstMissingPositive(int[] nums) {
        sort(nums);
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return nums.length + 1;
    }

    void sort(int[] nums) {
        int i = 0;

        while (i < nums.length) {
            int correct = nums[i] - 1;

            if (nums[i] >0 && correct < nums.length && nums[i] != nums[correct]) {
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            } else i++;
        }
    }
}

// In cycle sort swapping is done only if the element has a correct position in the array.