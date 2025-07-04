/*
Reverse Pairs

Given an integer array nums, return the number of reverse pairs in the array.
A reverse pair is a pair (i, j) where:
0 <= i < j < nums.length and
nums[i] > 2 * nums[j].
Example 1:
Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1
*/

// Using Merge Sort Logic


class Solution {
public:
    int merge(vector<int>& nums, int left, int right)
    {
        if(left >= right) return 0;
        int mid = left + (right-left)/2;
        int count = merge(nums, left, mid) + merge(nums, mid + 1, right);

        int j = mid + 1;
        for(int i = left; i <= mid; i++)
        {
            while(j<= right && (long long)nums[i] > 2LL * nums[j])
            {
                j++;
            }
            count += j - (mid + 1);
        }

        vector<int> temp;
        int i = left; j = mid + 1;
        while(i <= mid && j <= right)
        {
            if(nums[i] <= nums[j]) temp.push_back(nums[i++]);
            else temp.push_back(nums[j++]);
        }
        while(i <= mid) temp.push_back(nums[i++]);
        while(j <= right) temp.push_back(nums[j++]);

        for(int i = left; i <= right; i++)
        {
            nums[i] = temp[i - left];
        }
        
        return count;
    }

    int reversePairs(vector<int>& nums) {
        return merge(nums, 0, nums.size()-1);
    }
};

/*
Time Limit Exceeded
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(((long long)nums[i] > 2LL * nums[j]) && i < j)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
*/