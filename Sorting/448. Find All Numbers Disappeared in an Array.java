/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
*/

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        sort(nums);
        return find(nums);
    }

    void sort(int[] nums) {
		int i = 0;
        while (i < nums.length) {
            int correct = nums[i] - 1;

            if (correct < nums.length && nums[i] != nums[correct]) {
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            } else i++;
        }
	}
    
    List<Integer> find(int[] nums) {
		List<Integer> missing = new ArrayList();

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1) {
                missing.add(i + 1);
            }
        }

        return missing;
	}
}
