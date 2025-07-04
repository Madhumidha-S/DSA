/*
Search Insert Position

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
*/

// Linear
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ind = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
            {
                ind = i;
                return ind;
            }
            else if(nums[i] < target)
            {
                ind = i;
            }
        }
        return ind == n -1 ? n : ind + 1;
    }
};

// Binary

class Solution {
public:
    int bs(vector<int>& nums, int target, int left, int right, int& ind)
    {
        if(left > right) return ind;
        int mid = left + (right - left) / 2;

        if(nums[mid] >= target)
        {
            ind = mid;
            return bs(nums, target, left, mid - 1, ind);
        }
        else
        {
            return bs(nums, target, mid + 1, right, ind);
        }
    }

    int searchInsert(vector<int>& nums, int target) {
        int ind = nums.size();
       return bs(nums, target, 0, nums.size() - 1, ind);
    }
};