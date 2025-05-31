#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    cout << v.size() << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
}