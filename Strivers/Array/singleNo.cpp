class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> c;
        for(int i = 0; i < n; i++)
        {
            c[nums[i]]++;
        }
        int result = 0;
        for(auto& r : c)
        {
            if(r.second == 1)
            {
                result = r.first;
            }
        }
        return result;
    }
};