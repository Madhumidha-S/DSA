/*
Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].
*/
class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> a;
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        int m = -1, r = -1;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
                m = i;
            else if (freq[i] == 2)
                r = i;
        }
        return {r, m};
    }
};