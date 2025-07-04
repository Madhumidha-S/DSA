/*
Floor and Ceil in Sorted Array

Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.
Examples:
Input : nums =[3, 4, 4, 7, 8, 10], x= 5
Output: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.
Input : nums =[3, 4, 4, 7, 8, 10], x= 8
Output: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
*/
class Solution {
public:
    void bs(vector<int> nums, int x, int left, int right, int& f, int& c)
    {
        if(left > right) return;
        int mid = left + (right - left) / 2;
        if(nums[mid] == x)
        {
            f = nums[mid];
            c = nums[mid];
            return;
        }
        else if(nums[mid] < x)
        {
            f = nums[mid];
            bs(nums, x, mid + 1, right, f, c);
        }
        else
        {
            c = nums[mid];
            bs(nums, x, left, mid - 1, f, c);
        }
    }
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int> res;
        int f = -1, c = -1;
        bs(nums, x, 0, nums.size() - 1, f, c);
        return {f ,c};
    }
};