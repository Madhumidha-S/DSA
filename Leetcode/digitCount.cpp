#include <iostream>
#include <string>
using namespace std;

int countDigit(int n)
{
    // string s = to_string(n);
    // int d = s.length();
    // return d;

    if (n == 0)
        return 1;
    int temp = n, d = 0;
    while (temp > 0)
    {
        temp % 10;
        d++;
        temp /= 10;
    }
    return d;
}

int main()
{
    cout << countDigit(7781);
}