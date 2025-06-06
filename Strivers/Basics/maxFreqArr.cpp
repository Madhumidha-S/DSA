// Using Hashing Method
class Solution
{
public:
    int mostFrequentElement(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int max = 0, val = nums[0];
        for (auto x : map)
        {
            if (x.second > max)
            {
                max = x.second;
                val = x.first;
            }
        }
        return val;
    }
};