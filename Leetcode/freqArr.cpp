// 1838. Frequency of the Most Frequent Element
// Using Sliding window method
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        long long left = 0, tot = 0;
        int res = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            tot += nums[right];
            while ((long long)nums[right] * (right - left + 1) - tot > k)
            {
                tot -= nums[left];
                left++;
            }
            res = max(res, (int)(right - left + 1));
        }
        return res;
    }
};