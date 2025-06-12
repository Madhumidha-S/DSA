class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> a;
        a.push_back(arr[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= a[a.size() - 1])
            {
                a.push_back(arr[i]);
            }
        }
        reverse(a.begin(), a.end());
        return a;
    }
};