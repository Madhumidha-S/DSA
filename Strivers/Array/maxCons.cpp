//Max consecutive one 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> c;
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                c[j]++;
            }
            else
            {
                j++;
            }
        }
        int count = 0;
        for(auto& k : c)
        {
            if(k.second > count)
            {
                count = k.second;
            }
        }
        return count;
    }
};