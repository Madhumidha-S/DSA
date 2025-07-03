/*
Subarray Sum Equals K
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.
Example 1:
Input: nums = [1,1,1], k = 2
Output: 2
Example 2:
Input: nums = [1,2,3], k = 3
Output: 2
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count = 0;
        unordered_map<int, int> prefixMap;
        prefixMap[0] = 1;

        for(auto& n : nums)
        {
            prefixSum += n;
            if(prefixMap.find(prefixSum - k) != prefixMap.end())
            {
                count += prefixMap[prefixSum - k];
            }
            prefixMap[prefixSum]++;
        }
        return count;
    }
};