/*
Maximum Product Subarray
Given an integer array nums, find a subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.
Example 1:
Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int suf = 1;
        int maxp = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(pre == 0) { pre = 1; }
            if(suf == 0) { suf = 1; }

            pre = pre * nums[i];
            suf = suf * nums[n - i - 1];
            maxp = max(maxp, max(pre, suf));
        }
        return maxp;
    }
};