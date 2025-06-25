// Kadane's Algorithm for Maximum Subarray Problem

// Here, a - max so far & b - max ending here

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int a = nums[0], b = nums[0];
        for (int i = 1; i < n; i++)
        {
            b = max(nums[i], b + nums[i]);
            a = max(a, b);
        }
        return a;
    }
};