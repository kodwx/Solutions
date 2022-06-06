// LeetCode - 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0)
            return true;
        if (x < 0 || x % 10 == 0)
            return false;
        int y = x;
        long rev = 0; // to avoid overflow
        while (y > 0) { // reverses the number
            rev *= 10;
            rev += y % 10;
            y /= 10;
        }
        return rev == x;
    }
};