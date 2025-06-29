class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; //helps to check for k less than n size
        vector<int> r;
        for(int i = k; i > 0; i--)
        {
            r.push_back(nums[n-i]);
        }
        for(int j = 0; j < (n-k); j++)
        {
            r.push_back(nums[j]);
        }
        nums = r;
    }
};