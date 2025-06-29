class Solution {
public:
    int partition(vector<int>& nums, int p, int r)
    {
        int x = nums[r];
        int i = p-1;
        for(int j = p; j < r; j++)
        {
            if(nums[j] <= x)
            {
                i++;
                int temp1 = nums[i];
                nums[i] = nums[j];
                nums[j] = temp1;
            }
        }
        i++;
        int temp2 = nums[i];
        nums[i] = nums[r];
        nums[r] = temp2;
        return i;
    }

    void qs(vector<int>& nums, int p, int r)
    {
        if(p < r)
        {
            int q = partition(nums, p, r);
            qs(nums, p, q-1);
            qs(nums, q+1, r);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        qs(nums, 0, n-1);
        return nums;
    }
};
