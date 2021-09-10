/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.
*/

class Solution {
    public boolean isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;

        long start = 1;
        long end = num / 2;
        while(start <= end) {
            long mid = start + (end - start) / 2;
        
            if (mid * mid< num) {
                start = mid + 1;
            } else if (mid * mid> num) {
                end = mid - 1;
            } else {
                return true;
            }
        }

        return false;
    }
}