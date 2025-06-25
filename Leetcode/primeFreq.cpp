// Check if Any Element Has Prime Frequency
class Solution
{
public:
    bool cprime(int n)
    {
        if (n == 0 || n == 1)
            return false;
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
                return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto &[key, value] : freq)
        {
            if (cprime(value))
                return true;
        }
        return false;
    }
};