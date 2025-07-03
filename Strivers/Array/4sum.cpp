class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        
        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int temp1 = j + 1;
                int temp2 = n - 1;
                while(temp1 < temp2)
                {
                    long long sum = (long long)nums[i] + nums[j] + nums[temp1] + nums[temp2];
                    if(sum == target)
                    {
                        res.push_back({nums[i], nums[j], nums[temp1], nums[temp2]});
                        while(temp1 < temp2 && nums[temp1] == nums[temp1 + 1]) temp1++;
                        while(temp1 < temp2 && nums[temp2] == nums[temp2 - 1]) temp2--; 
                        temp1++; temp2--;
                    }
                    else if(sum < target) temp1++;
                    else temp2--;
                }
            }
        }
        return res;
    }
};