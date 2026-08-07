/*
Problem: 9. Palindrome Number
Link: https://leetcode.com/problems/palindrome-number/
Difficulty: Easy

Approach:
- Reverse the given number.
- Compare the reversed number with the original.
- If both are equal, the number is a palindrome.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
   
    public boolean isPalindrome(int x) {
        int temp =x;
        int rev = 0;
        while(x>0){
            int digit = x % 10;
            rev = (rev*10)+digit;
            x= x/10;
        }
        if(rev == temp){
            return true;
        }
        return false;
        
    }
}
