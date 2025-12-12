// 3566. Partition Array into Two Equal Product Subsets

/*
Passes only 475/710 testcases

class Solution
{
public:
    bool checkEqualPartitions(vector<int> &nums, long long target)
    {
        int n = nums.size();
        vector<int> a;
        vector<int> b;
        bool flag = false;
        for (int i = 0; i < n && !flag; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && 1LL * nums[i] * nums[j] == target)
                {
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            return false;
        for (int k = 0; k < n; k++)
        {
            if ((nums[k] != a[0]) && (nums[k] != a[1]))
            {
                b.push_back(nums[k]);
            }
        }
        int p1 = 1;
        for (int i = 0; i < b.size(); i++)
        {
            p1 *= b[i];
        }
        if (p1 == target)
            return true;
        else
            return false;
    }
}
*/

/*
Passed 654/710 testcase
class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        int tot = 1<<n;
        for(int mask = 1; mask < tot-1; mask++)
            {
                long long p1 = 1;
                long long p2 = 1;
                vector<int> a, b;
                for(int i = 0; i < n; i++)
                    {
                        if(mask & (1<<i))
                        {
                            a.push_back(nums[i]);
                            p1 *= nums[i];
                        }
                        else
                        {
                            b.push_back(nums[i]);
                            p2 *= nums[i];
                        }
                    }
                if(p1 == target && p2 == target)
                    return true;
            }
        return false;
    }
}
 */

class Solution
{
public:
    bool willOverflow(long long a, int b)
    {
        if (b == 0)
            return false;
        return a > LLONG_MAX / b;
    }

    bool checkEqualPartitions(vector<int> &nums, long long target)
    {
        int n = nums.size();
        int tot = 1 << n;

        for (int mask = 1; mask < tot - 1; mask++)
        {
            long long p1 = 1, p2 = 1;
            bool valid = true;

            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    if (willOverflow(p1, nums[i]))
                    {
                        valid = false;
                        break;
                    }
                    p1 *= nums[i];
                }
                else
                {
                    if (willOverflow(p2, nums[i]))
                    {
                        valid = false;
                        break;
                    }
                    p2 *= nums[i];
                }
            }

            if (valid && p1 == target && p2 == target)
            {
                return true;
            }
        }

        return false;
    }
};