#include <bits/stdc++.h>
using namespace std;

// Difference array method
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> c(N + 1, 0);
    for (int i = 0; i < M; i++)
    {
        int L, R;
        cin >> L >> R;
        c[L - 1] += 1;
        c[R] -= 1;
    }
    for (int i = 1; i < N; i++)
    {
        c[i] += c[i - 1];
    }
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (c[i] < min)
            min = c[i];
    }
    cout << min;
}

/*
Time Limit Exceeded

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int L[M], R[M];
    for (int i = 0; i < M; i++)
    {
        cin >> L[i] >> R[i];
    }
    int c[N];
    memset(c, 0, sizeof(c));
    for (int i = 0; i < M; i++)
    {
        for (int j = L[i]; j <= R[i]; j++)
        {
            c[j - 1]++;
        }
    }
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (c[i] < min)
            min = c[i];
    }
    cout << min;
}
*/