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