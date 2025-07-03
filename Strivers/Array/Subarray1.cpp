/*
Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
Examples:
Input: nums = [10, 5, 2, 7, 1, 9],  k=15
Output: 4
Explanation: The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.
*/

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int sum = 0;
        int maxLen = 0;
        unordered_map<int,int> prefixMap;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            if(sum == k) maxLen = i+1;
            if(prefixMap.find(sum - k) != prefixMap.end())
            {
                int len = i - prefixMap[sum - k];
                maxLen = max(maxLen, len);
            }
            if(prefixMap.find(sum) == prefixMap.end())
            {
                prefixMap[sum] = i;
            }
        }
        return maxLen;
    }
};
