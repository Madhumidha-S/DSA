/*
You are given an integer array arr of size n which contains both positive and negative integers. Your task is to find the length of the longest contiguous subarray with sum equal to 0.
Return the length of such a subarray. If no such subarray exists, return 0.
Examples:
Input: arr = [15, -2, 2, -8, 1, 7, 10, 23]
Output: 5
Explanation:
The subarray [-2, 2, -8, 1, 7] sums up to 0 and has the maximum length among all such subarrays.
*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int maxLen = 0;
        int sum = 0;
        unordered_map<int,int> prefixMap;

        for(int i = 0; i < n; i++)
        {
          sum += arr[i];
          if(sum == 0) maxLen = i + 1;
          if(prefixMap.find(sum) != prefixMap.end())
          {
            int len = i - prefixMap[sum];
            maxLen = max(maxLen, len);
          }
          else
          {
            prefixMap[sum] = i;
          }
        }
        return maxLen;
    }
};