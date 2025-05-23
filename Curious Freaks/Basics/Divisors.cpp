int *printDivisors(int n, int &size)
{
    int *temp = new int[n];
    int j = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            temp[j++] = i;
        }
    }
    size = j;
    return temp;
}

// If n=148, temp = [1, 2, 4, 37, 74, 148 ]