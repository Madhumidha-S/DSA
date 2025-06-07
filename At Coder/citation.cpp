#include <bits/stdc++.h>
using namespace std;

int check(int N, int A[])
{
    for (int i = 0; i <= N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (i <= A[j])
            {
                count++;
            }
        }
        if (i > count)
        {
            return i - 1;
        }
    }
    return N;
}

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int result = check(N, A);
    cout << result;
}