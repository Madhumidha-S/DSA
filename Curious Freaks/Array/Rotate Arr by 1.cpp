/*Rotating Array by 1*/

class Solution
{
public:
    void rotate(vector<int> &arr)
    {
        int n = arr.size();
        int temp[n];
        for (int i = 1; i < n; i++)
        {
            temp[i] = arr[i - 1];
        }
        temp[0] = arr[n - 1];
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
};