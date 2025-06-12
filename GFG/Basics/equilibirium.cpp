/*
Given an array of integers arr[], the task is to find the first equilibrium point in the array.

The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists.


This works for 1010/1115 test cases
class Solution
{
public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int s1 = 0, s2 = 0;
            for (int j = 0; j < i; j++)
            {
                s1 += arr[j];
            }
            for (int k = i + 1; k < n; k++)
            {
                s2 += arr[k];
            }
            if (s1 == s2)
                return i;
        }
        return -1;
    }
};

*/

class Solution
{
public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr)
    {
        int n = arr.size();
        int tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += arr[i];
        }
        int left = 0;
        for (int j = 0; j < n; j++)
        {
            int right = tot - left - arr[j];
            if (right == left)
                return j;
            left += arr[j];
        }
        return -1;
    }
};