/*
Count Inversions

Given an integer array nums. Return the number of inversions in the array.
Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
It indicates how close an array is to being sorted.
A sorted array has an inversion count of 0.
An array sorted in descending order has maximum inversion.
Examples:
Input: nums = [2, 3, 7, 1, 3, 5]
Output: 5
Explanation: The responsible indexes are:
nums[0], nums[3], values: 2 > 1 & indexes: 0 < 3
nums[1], nums[3], values: 3 > 1 & indexes: 1 < 3
nums[2], nums[3], values: 7 > 1 & indexes: 2 < 3
nums[2], nums[4], values: 7 > 3 & indexes: 2 < 4
nums[2], nums[5], values: 7 > 5 & indexes: 2 < 5
*/
class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        long long int count = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(nums[i] > nums[j] && i < j)
                {
                    count++;
                }
            }
        }
        return count;
    }
};