/*
Problem: 26. Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Difficulty: Easy

Approach:
- Use two pointers to keep track of unique elements.
- Since the array is sorted, duplicates are next to each other.
- Return the count of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for( int j=1;j<n;j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
    return i+1;    
        

    }
};
