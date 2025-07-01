// Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int temp = -1;

        for(int i = n-2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                temp = i;
                break;
            }
        }
        if(temp == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int j = n-1; j >= 0; j--)
        {
            if(nums[j] > nums[temp])
            {
                swap(nums[j], nums[temp]);
                break;
            }
        }
        reverse(nums.begin() + temp + 1, nums.end());
    }
};