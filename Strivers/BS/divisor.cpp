// 1283. Find the Smallest Divisor Given a Threshold
class Solution {
public:
    bool check(int mid, vector<int>& nums, int threshold) {
        int sum = 0;
        for(int d: nums) {
            sum += ((d + mid - 1) / mid);
        }
        return (sum <= threshold);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(check(mid, nums, threshold)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};