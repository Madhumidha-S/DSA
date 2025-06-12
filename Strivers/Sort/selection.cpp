// Time Complexity of O(n2)

class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            int mini = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[mini] > nums[j])
                {
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini] = nums[i];
            nums[i] = temp;
        }
        return nums;
    }
};
