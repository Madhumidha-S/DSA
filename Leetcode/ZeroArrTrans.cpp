// 3355. Zero Array Transformation I

/*
// Time Limit Exceeded (664/684 test cases)
class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = queries.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                if (nums[j] != 0)
                    nums[j] -= 1;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                return false;
        }
        return true;
    }
};

// By using Difference Array method

// Failed basic test case
class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        int m = queries.size();
        vector<int> diff(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            diff[queries[i][0]] += 1;
            if (queries[i][1] + 1 <= n)
                diff[queries[i][1] + 1] -= 1;
        }
        for (int i = 1; i <= n; i++)
        {
            diff[i] += diff[i - 1];
        }
        for (int j = 0; j < n; j++)
        {
            nums[j] -= diff[j];
            if (nums[j] != 0)
                return false;
        }
        return true;
    }
};

// Failed 664th test case, time exceed limit

class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        int m = queries.size();
        vector<int> diff(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                if (nums[j] - diff[j] > 0)
                {
                    diff[j] += 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] - diff[i] != 0)
                return false;
        }
        return true;
    }
};

*/

class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        int m = queries.size();
        vector<int> diff(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            diff[queries[i][0]] += 1;
            diff[queries[i][1] + 1] -= 1;
        }
        for (int i = 1; i <= n; i++)
        {
            diff[i] += diff[i - 1];
        }
        for (int j = 0; j < n; j++)
        {
            if (diff[j] < nums[j])
                return false;
        }
        return true;
    }
};