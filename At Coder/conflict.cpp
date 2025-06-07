#include <bits/stdc++.h>
using namespace std;

string check(int N, string T, string A)
{
    for (int i = 0; i < N; i++)
    {
        if (T[i] == 'o' && A[i] == 'o')
            return "Yes";
    }
    return "No";
}

int main()
{
    int N;
    string T, A;
    cin >> N >> T >> A;
    string result = check(N, T, A);
    cout << result;
}