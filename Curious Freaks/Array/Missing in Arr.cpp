/*Missing value in an Array of 1 to n*/

class Solution
{
public:
    int missingNumber(vector<int> &arr)
    {
        int n = arr.size();
        int temp = -1;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            int num = i + 1;
            if (num != arr[i])
            {
                temp = num;
                break;
            }
        }
        if (temp == -1)
        {
            temp = n + 1;
        }
        return temp;
    }
};

// Also

class Solution
{
public:
    int missingNum(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != (i + 1))
                return i + 1;
        }
        return arr[n - 1] + 1;
    }
};