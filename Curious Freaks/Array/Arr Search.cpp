/*Array Search*/
int search(vector<int> &arr, int x)
{

    int n = arr.size();
    int temp = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            temp = i;
            break;
        }
    }
    return temp;
}