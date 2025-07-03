class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = n - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0)
                { 
                    res.push_back({nums[i], nums[left], nums[right]}); 
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++; right--;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        return res;
    }
};


/*
With Target

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n - 2; i++)
        {
            if(i > 0 && arr[i] == arr[i-1]) continue;
            int left = i + 1;
            int right = n - 1;
            while(left < right)
            {
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == target) return true;
                else if(sum < target) left++;
                else right--;
            }
        }
        return false;
    }
};






Also

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n= arr.size();
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k] == target)
                        return true;
                }
            }
        }
        return false;
    }
};
*/