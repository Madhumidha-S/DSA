/*
Count subarrays with given xor K
Given an array of integers nums and an integer k, return the total number of subarrays whose XOR equals to k.
Examples:
Input : nums = [4, 2, 2, 6, 4], k = 6
Output : 4
Explanation : The subarrays having XOR of their elements as 6 are [4, 2],  [4, 2, 2, 6, 4], [2, 2, 6], and [6]
*/
class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int count = 0;
        int xr = 0;
        unordered_map<int, int> prefixXOR;
        prefixXOR[0] = 1;
        for(auto& n : nums)
        {
            xr ^= n;
            if(prefixXOR.find(xr^k) != prefixXOR.end())
            {
                count += prefixXOR[xr^k];
            }
            prefixXOR[xr]++;
        }
        return count;
    }
};