/*
3550. Smallest Index With Digit Sum Equal to Index

You are given an integer array nums.
Return the smallest index i such that the sum of the digits of nums[i] is equal to i.
If no such index exists, return -1.
*/
class Solution
{
public:
    int smallestIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                continue;
            int sum = 0;
            int temp = nums[i];
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum == i)
                return i;
        }
        return -1;
    }
};