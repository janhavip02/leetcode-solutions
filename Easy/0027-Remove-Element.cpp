/*
Problem: 27. Remove Element
Difficulty: Easy

Approach:
- Skip the elements equal to val.
- Move the remaining elements to the front of the array.
- Return the count of remaining elements.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
