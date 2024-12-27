/*Rotating Array by k*/
vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    int temp[n], j = 0;
    for (int i = 0; i < n - k; i++)
    {
        temp[i] = arr[i + k];
    }
    for (int i = n - k; i < n; i++)
    {
        temp[i] = arr[j];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    return arr;
}