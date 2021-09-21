/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
*/

class Solution {
    public int missingNumber(int[] nums) {
        sort(nums);
        return find(nums);
    }
    
    void sort(int[] arr) {
		int i = 0;
		while (i < arr.length) {
			int correct = arr[i];
			
			if (arr[i] != arr.length && arr[i] != arr[correct]) {
				int temp = arr[i];
				arr[i] = arr[correct];
				arr[correct] = temp;
			} else i++;	
		}
	}
    
    int find(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] != i) {
				return i;
			}
		}
		
		return arr.length;
	}
}
