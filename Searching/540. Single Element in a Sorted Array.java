/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Follow up: Your solution should run in O(log n) time and O(1) space.
*/

class Solution {
    public int singleNonDuplicate(int[] nums) {
        int start = 0;
        int end = nums.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid < end && nums[mid] == nums[mid + 1]) {
                if (mid % 2 == 0) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            } else {
                if (mid % 2 == 1) {
                    start = mid + 1;
                } else if (mid > start && nums[mid - 1] == nums[mid]) {
                    end = mid - 1;
                } else {
                    return nums[mid];
                }
            }
        }

        return -1;
    }
}