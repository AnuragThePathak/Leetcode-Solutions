/*
You are standing at position 0 on an infinite number line. There is a destination at position target.

You can make some number of moves numMoves so that:

    On each move, you can either go left or right.
    During the ith move (starting from i == 1 to i == numMoves), you take i steps in the chosen direction.

Given the integer target, return the minimum number of moves required (i.e., the minimum numMoves) to reach the destination.

*/

class Solution {
    public int reachNumber(int target) {
        int position = 0;
        int numMoves = 1;

        while (position + numMoves < target) {
            position += numMoves;
            numMoves++; 
        }

        if (position + numMoves == target) {
            return numMoves;
        }

        
    }
}