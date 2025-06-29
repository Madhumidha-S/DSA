class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        vector<int> r;
        for(int i = 1; i < n; i++)
        {
            r.push_back(nums[i]);
        }
        r.push_back(nums[0]);
        nums = r;
    }
};