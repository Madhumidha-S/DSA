/* 3592. Inverse Coin Change

You are given a 1-indexed integer array numWays, where numWays[i] represents the number of ways to select a total amount i using an infinite supply of some fixed coin denominations. Each denomination is a positive integer with value at most numWays.length.
However, the exact coin denominations have been lost. Your task is to recover the set of denominations that could have resulted in the given numWays array.
Return a sorted array containing unique integers which represents this set of denominations.
If no such set exists, return an empty array.

Example 1:

Input: numWays = [0,1,0,2,0,3,0,4,0,5]
Output: [2,4,6]
*/

class Solution
{
public:
    vector<int> findCoins(vector<int> &numWays)
    {
        int n = numWays.size();
        vector<int> a(n + 1, 0);
        vector<int> res;
        a[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (numWays[i - 1] == 0)
                continue;
            vector<int> temp = a;
            for (int j = i; j <= n; j++)
            {
                temp[j] += temp[j - i];
            }
            bool isValid = true;
            bool contrib = false;
            for (int k = 1; k <= n; k++)
            {
                if (temp[k] > numWays[k - 1])
                {
                    isValid = false;
                    break;
                }
                if (temp[k] > a[k])
                    contrib = true;
            }
            if (isValid && contrib)
            {
                res.push_back(i);
                a = temp;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != numWays[i - 1])
                return {};
        }
        return res;
    }
};