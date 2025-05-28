// Reverse of an Array
class Solution
{
public:
    void reverse(int arr[], int n)
    {
        int a[n], j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            a[i] = arr[j];
            j++;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = a[i];
        }
    }
};
