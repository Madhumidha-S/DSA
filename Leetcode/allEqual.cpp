// 3576. Transform Array to All Equal Elements
/*
497/607 testcases passed

class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        int n = nums.size();
        int kp=0;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == -1 && kp != k)
            {
                nums[i] *= -1;
                nums[i+1] *= -1;
                kp++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] == -1)
                return false;
        }
        return true;
    }
};©leetcode
*/

class Solution
{
public:
    int countFlips(int target, vector<int> nums)
    {
        vector<int> temp = nums;
        int flips = 0;
        for (int i = 0; i < temp.size() - 1; i++)
        {
            if (temp[i] != target)
            {
                temp[i] *= -1;
                temp[i + 1] *= -1;
                flips++;
            }
        }
        for (int val : temp)
            if (val != target)
                return INT_MAX;
        return flips;
    }
    bool canMakeEqual(vector<int> &nums, int k)
    {
        int flipsTo1 = countFlips(1, nums);
        int flipsToMinus1 = countFlips(-1, nums);
        int minFlips = min(flipsTo1, flipsToMinus1);

        return minFlips <= k;
    }
};
©leetcode