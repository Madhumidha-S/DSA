// It returns element which repeats more than 1 time
// Using Hashing method

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        vector<int> a;
        vector<int> freq(max + 1, 0);
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] >= 2)
                a.push_back(i);
        }
        return a;
    }
};