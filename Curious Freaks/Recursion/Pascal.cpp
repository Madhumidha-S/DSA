// Pascal Triangle
// Time O(n) and Space O(n)

class Solution
{
public:
    vector<int> nthRowOfPascalTriangle(int n)
    {
        vector<int> arr(n, 1);
        for (int i = 1; i < n - 1; i++)
        {
            arr[i] = (arr[i - 1] * (n - i)) / i;
        }
        return arr;
    }
};
