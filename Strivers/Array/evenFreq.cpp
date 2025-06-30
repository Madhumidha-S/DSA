// Most freq even element

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> c;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 2 ==0)
            { c[nums[i]]++; }
        }
        int result = -1;
        int maxFreq = 0;
        for(auto& k : c)
        {
            if(k.second > maxFreq)
            {
                maxFreq = k.second;
                result = k.first;
            }
        }
        return result;
    }
};