class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> freq(n+1,0);
        for(int i = 0; i < n ; i++)
        {
            freq[nums[i]]++;
        }
        int missing = -1, repeating = -1;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
            } else if (freq[i] == 2) {
                repeating = i;
            }
        }
        return {repeating, missing};
    }
};