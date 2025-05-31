#include <bits/stdc++.h>
using namespace std;

string check(int n, int S, int arr[])
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            t = 0;
        else
            t = arr[i - 1];
        if ((arr[i] - t) > S)
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    int n, S;
    cin >> n >> S;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string result = check(n, S, arr);
    cout << result;
}
