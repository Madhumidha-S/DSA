/*Max and Min term in an Array*/
class Solution
{
public:
    pair<long long, long long> getMinMax(vector<long long int> arr)
    {

        int n = arr.size();
        int max = INT_MIN;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return {min, max};
    }
};