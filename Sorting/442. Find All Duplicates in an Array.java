/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.

*/
class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        sort(nums);

        List<Integer> list = new ArrayList();

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1) list.add(nums[i]);
        }

        return list;
    }

    void sort(int[] nums) {
        int i = 0;
        while (i < nums.length) {
            int correct = nums[i] - 1;

            if (nums[i] != nums[correct]) {
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            } else i++;

        }
    }
}